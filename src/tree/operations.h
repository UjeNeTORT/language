/*************************************************************************
 * (c) 2023 Tikhonov Yaroslav (aka UjeNeTORT)
 *
 * email:    tikhonovty@gmail.com
 * telegram: https://t.me/netortofficial
 * GitHub:   https://github.com/UjeNeTORT
 * repo:     https://github.com/UjeNeTORT/language
 *************************************************************************/

#ifndef OPERATIONS_H
#define OPERATIONS_H

const int ILL_OPNUM = __INT_MAX__;

typedef enum
{
    FUNC_DECLARATOR = 0,
    VAR_DECLARATOR  = 1,
} DeclaratorCode;

struct Declarator
{
    const char* const name;
    DeclaratorCode dclr_code;
};

const Declarator DECLARATORS[] =
{
    {"россии_нужен", FUNC_DECLARATOR},
    {"але_здравствуйте_меня_зовут_ольга_звоню_вам_из_тинькок_банка_вам_удобно_сейчас_разговаривать",
                     VAR_DECLARATOR},
};
const int N_DECLARATORS = sizeof (DECLARATORS) / sizeof (DECLARATORS[0]);

typedef enum
{
    KW_DO     = 0,
    KW_IF     = 1,
    KW_ELSE   = 2,
    KW_WHILE  = 3,
    KW_RETURN = 4,
} KeywordCode;

struct Keyword
{
    const char* const name;
    KeywordCode    kw_code;
};

const Keyword KEYWORDS[] =
{
    {"я_ссыкло_или_я_не_ссыкло", KW_DO},
    {"какая_разница",            KW_IF},
    {"я_могу_ошибаться",         KW_ELSE},
    {"ну_сколько_можно",         KW_WHILE},
    {"никто_никогда_не_вернет",  KW_RETURN},
};
const int N_KEYWORDS = sizeof(KEYWORDS) / sizeof(KEYWORDS[0]);

typedef enum
{
    END_STATEMENT           = 0,
    ENCLOSE_STATEMENT_BEGIN = 1,
    ENCLOSE_STATEMENT_END   = 2,
    ENCLOSE_MATH_EXPR       = 3,
    END_CONDITION           = 4,
    BEGIN_FUNC_PARAMS       = 5,
    END_FUNC_PARAMS         = 6,
} SeparatorCode;

struct Separator
{
    const char* const name;
    SeparatorCode sep_code;
};

const Separator SEPARATORS[] =
{
    {"сомнительно_но_окей",   END_STATEMENT},
    {"олег_не_торопись",      ENCLOSE_STATEMENT_BEGIN},
    {"я_олигарх_мне_заебись", ENCLOSE_STATEMENT_END},
    {"$",                     ENCLOSE_MATH_EXPR},
    {"?",                     END_CONDITION},
    {"за",                    BEGIN_FUNC_PARAMS},
    {"почти_без_переплат",    END_FUNC_PARAMS},
};
const int N_SEPARATORS = sizeof(SEPARATORS) / sizeof(SEPARATORS[0]);

typedef enum
{
    ASSIGN = 0,
    ADD    = 1,
    SUB    = 2,
    MUL    = 3,
    DIV    = 4,
    POW    = 5,

    LESS    = 10,
    LESS_EQ = 11,
    EQUAL   = 12,
    MORE_EQ = 13,
    MORE    = 14,
    UNEQUAL = 15,
} OperatorCode;

struct Operator
{
    OperatorCode       op_code;
    const char* const  name;
};

const Operator OPERATORS[] =
{
    {ASSIGN, "я_так_чувствую"},
    {ADD,    "+"},
    {SUB,    "-"},
    {MUL,    "*"},
    {DIV,    "/"},
    {POW,    "^"},

    {LESS,    "<"},
    {LESS_EQ, "<="},
    {EQUAL,   "=="},
    {MORE_EQ, ">="},
    {MORE,    ">"},
    {UNEQUAL, "!="},
};
const int N_OPERATORS = sizeof(OPERATORS) / sizeof(OPERATORS[0]);

typedef enum
{
    ERROR       = 0, // none of other token types match, error (it is to be caught during syntax analysis) ?DO I NEED THIS?
    IDENTIFIER  = 1, // names assigned by the programmer
    DECLARATOR  = 2, //
    KEYWORD     = 3, // reserved words of the language (while, for, if, return, int in C)
    SEPARATOR   = 4, // punctuation characters ({, (, ;, in C)
    OPERATOR    = 5, // symbols that operate on arguments and produce result (<, =, +, / in C)
    INT_LITERAL = 6, // integer decimal number
} NodeType;
typedef NodeType TokenType;

#endif // OPERATIONS_H
