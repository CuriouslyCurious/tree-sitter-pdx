module.exports = grammar({
    name: 'pdx',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    //word: $ => $.plain,

    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ => $._pair,
        // seq($.pair, $.boundary_character),

        // boundary_character: $ => choice(
        //     $.operator,
        // ),


        _pair: $ => seq(
            field("key", choice($.variable, $._scalar)),
            choice(
                // Because objects and arrays are dumb they don't require an operator
                seq(
                    optional(field("operator", $._operator)),
                    field("value", $._block)
                ),
                seq(
                    field("operator", $._operator),
                    field("value", $._scalar),
                ),
            ),
        ),

        variable: $ => seq('@', $._scalar),

        _operator: $ => choice(
            field("assign", '='),
            field("greater_than", '>'),
            field("greater_than_or_equals", '>='),
            field("less_than", '<'),
            field("less_than_or_equals", '<='),
            field("not_equals", '!='),
            field("equals", '=='),
        ),

        _scalar: $ => choice(
            prec(5, $._scope),
            prec(4, $.string_literal),
            prec(3, $.bool_literal),
            prec(2, $.date_literal),
            prec(1, $.integer_literal),
            prec(0, $.plain),
        ),

        _scope: $ => choice(
            $.dynamic_scope,
            $.logic_scope,
        ),

        dynamic_scope: $ => choice(
            'ROOT',
            'FROM',
            'PREV',
            'THIS',
        ),

        logic_scope: $ => choice(
            'NOT',
            'NOR',
            'NAND',
            'AND',
            'OR',
        ),

        string_literal: $ => choice(
            seq('"', '"'),
            seq('"', $._string_content, '"'),
        ),

        _string_content: $ => repeat1(choice(
            token.immediate(prec(1, /[^\\"]+/)),
            $.string_escape,
        )),

        string_escape: $ => token.immediate(seq(
            '\\',
            /(\"|\\|\/|b|f|n|r|t|u)/
        )),

        integer_literal: $ => {
            const integer_digits = /\d+/;

            const integer_literal = seq(
                optional(choice('-', '+')),
                choice(
                    integer_digits,
                    seq(integer_digits, '.', integer_digits),
                    seq('.', integer_digits),
                ),
            );

            return token(integer_literal)
        },

        date_literal: $ => {
            const year = seq(/\d+/);
            const month = seq(/\d+/);
            const day = seq(/\d+/);

            const date_literal = seq(year, '.', month, '.', day);

            return token(date_literal)

        },

        bool_literal: $ => choice(
            field("true", 'yes'),
            field("false", 'no'),
        ),

        // Do not match any boundary characters
        plain: $ => /[^\s{}=><!\'\"#@]+/,

        // Separates boundary characters
        // const BOUNDARY_CHARACTERS = [
        //     ' ', '\n', // whitespace
        //     '{', '}', // braces
        //     '=', '>=', '>', '<', '<=', '!=', '==', // operators
        //     '"', "'", // quotes
        //     '#', // comments
        // ];
            //
        _block: $ => choice(
            $.object,
            $.array,
        ),

        // Prefer object over array if empty braces
        object: $ => prec(1, seq(
            '{',
            repeat($._pair),
            '}'
        )),
        array: $ => prec(0, seq(
            '{',
            repeat($._scalar),
            '}',
        )),

        comment: $ => token(seq('#', /.*/)),
    }
});
