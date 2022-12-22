;; PDX highlighting

;; Misc
(comment) @comment
(ERROR) @error
[
    "="
    "=="
    "!="
    ">"
    ">="
    "<"
    "<="
] @operator

;; Punctuation
;; [
;;     ","
;;     "."
;;     ";"
;; ] @punctuation.delimiter

[
    "{"
    "}"
] @punctuation.bracket

;; Literals
(string_literal) @string
(string_escape) @string.escape
(date_literal) @string.special

(bool_literal) @boolean
(integer_literal) @number

;; Keywords
[
    "ROOT"
    "FROM"
    "PREV"
    "THIS"
    "NOT"
    "NOR"
    "NAND"
    "AND"
    "OR"
] @keyword

;; Identifiers
[
    (plain)
    (variable)
] @variable
