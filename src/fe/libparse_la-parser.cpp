/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         z_yyparse
#define yylex           z_yylex
#define yyerror         z_yyerror
#define yydebug         z_yydebug
#define yynerrs         z_yynerrs

#define yylval          z_yylval
#define yychar          z_yychar

/* Copy the first part of user declarations.  */
#line 2 "src/fe/parser.ypp" /* yacc.c:339  */

#include "sym.h"
#include "fe/builder.h"
#include "fe/emitter.h"
#include "fe/enum_decl.h"
#include "fe/expr.h"
#include "fe/nodecode.h"
#include "fe/scanner.h"
#include "fe/stmt.h"
#include "fe/var_decl.h"
#include "synth/resource_params.h"

extern int yylex();
extern void yyerror(const char *msg);


#line 91 "src/fe/libparse_la-parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_Z_YY_SRC_FE_LIBPARSE_LA_PARSER_HPP_INCLUDED
# define YY_Z_YY_SRC_FE_LIBPARSE_LA_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int z_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    K_DEF = 258,
    K_FUNC = 259,
    K_ENUM = 260,
    K_IMPORT = 261,
    K_ASSIGN = 262,
    K_SHIFT = 263,
    K_INT = 264,
    K_BOOL = 265,
    K_STRING = 266,
    K_OBJECT = 267,
    K_THREAD = 268,
    K_CHANNEL = 269,
    K_MAILBOX = 270,
    K_VAR = 271,
    K_ADD_SUB = 272,
    K_LG_COMPARE = 273,
    K_EQ_COMPARE = 274,
    K_INC_DEC = 275,
    K_CONST = 276,
    K_IF = 277,
    K_ELSE = 278,
    K_RETURN = 279,
    K_GOTO = 280,
    K_FOR = 281,
    K_SPAWN = 282,
    K_WHILE = 283,
    K_DO = 284,
    K_CONTINUE = 285,
    K_SWITCH = 286,
    K_CASE = 287,
    K_DEFAULT = 288,
    K_BREAK = 289,
    NUM = 290,
    SYM = 291,
    STR = 292,
    K_LOGIC_OR = 293,
    K_LOGIC_AND = 294,
    K_BIT_CONCAT = 295,
    SIGN = 296,
    ADDRESS = 297
  };
#endif
/* Tokens.  */
#define K_DEF 258
#define K_FUNC 259
#define K_ENUM 260
#define K_IMPORT 261
#define K_ASSIGN 262
#define K_SHIFT 263
#define K_INT 264
#define K_BOOL 265
#define K_STRING 266
#define K_OBJECT 267
#define K_THREAD 268
#define K_CHANNEL 269
#define K_MAILBOX 270
#define K_VAR 271
#define K_ADD_SUB 272
#define K_LG_COMPARE 273
#define K_EQ_COMPARE 274
#define K_INC_DEC 275
#define K_CONST 276
#define K_IF 277
#define K_ELSE 278
#define K_RETURN 279
#define K_GOTO 280
#define K_FOR 281
#define K_SPAWN 282
#define K_WHILE 283
#define K_DO 284
#define K_CONTINUE 285
#define K_SWITCH 286
#define K_CASE 287
#define K_DEFAULT 288
#define K_BREAK 289
#define NUM 290
#define SYM 291
#define STR 292
#define K_LOGIC_OR 293
#define K_LOGIC_AND 294
#define K_BIT_CONCAT 295
#define SIGN 296
#define ADDRESS 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "src/fe/parser.ypp" /* yacc.c:355  */

  class ArrayInitializer *array;
  class Expr *expr;
  class EnumDecl *enum_decl;
  class Stmt *stmt;
  class VarDecl *var_decl;
  class VarDeclSet *var_decl_set;
  class NstBlock *block;
  const char *str;
  sym_t sym;
  uint64_t num;
  struct WidthSpec width_spec;
  class ResourceParamValue *import_param;
  class ResourceParamValueSet *import_params;

#line 231 "src/fe/libparse_la-parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE z_yylval;

int z_yyparse (void);

#endif /* !YY_Z_YY_SRC_FE_LIBPARSE_LA_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 248 "src/fe/libparse_la-parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   861

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    60,     2,     2,    46,     2,
      55,    56,    47,     2,    38,     2,    52,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    61,
       2,     2,     2,    39,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    44,    59,    49,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    41,    42,    43,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    92,    93,    96,    98,   103,   105,   109,
     111,   115,   117,   121,   123,   127,   129,   133,   135,   139,
     143,   150,   150,   152,   156,   157,   160,   162,   164,   168,
     170,   172,   176,   179,   183,   187,   188,   191,   193,   195,
     197,   201,   204,   208,   210,   212,   217,   219,   223,   225,
     229,   233,   237,   242,   246,   250,   254,   259,   264,   269,
     271,   273,   275,   280,   283,   285,   287,   288,   289,   290,
     292,   294,   295,   296,   297,   298,   299,   300,   302,   303,
     305,   307,   308,   309,   313,   317,   321,   325,   329,   334,
     340,   344,   347,   352,   357,   362,   377,   386,   392,   399,
     403,   411,   414,   415,   418,   421,   425,   430,   434,   436,
     440,   443,   445,   447,   449,   451,   453,   455,   457,   459,
     461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   496,   501,   503,
     507,   511,   515,   517
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_DEF", "K_FUNC", "K_ENUM", "K_IMPORT",
  "K_ASSIGN", "K_SHIFT", "K_INT", "K_BOOL", "K_STRING", "K_OBJECT",
  "K_THREAD", "K_CHANNEL", "K_MAILBOX", "K_VAR", "K_ADD_SUB",
  "K_LG_COMPARE", "K_EQ_COMPARE", "K_INC_DEC", "K_CONST", "K_IF", "K_ELSE",
  "K_RETURN", "K_GOTO", "K_FOR", "K_SPAWN", "K_WHILE", "K_DO",
  "K_CONTINUE", "K_SWITCH", "K_CASE", "K_DEFAULT", "K_BREAK", "NUM", "SYM",
  "STR", "','", "'?'", "':'", "K_LOGIC_OR", "K_LOGIC_AND", "K_BIT_CONCAT",
  "'|'", "'^'", "'&'", "'*'", "'!'", "'~'", "SIGN", "ADDRESS", "'.'",
  "'['", "']'", "'('", "')'", "'@'", "'{'", "'}'", "'#'", "';'", "$accept",
  "input", "IMPORT_PARAM_HEAD", "IMPORT_PARAM", "IMPORT_PARAM_LIST",
  "IMPORT_SPEC", "RETURN_TYPE", "RETURN_TYPE_LIST", "RETURN_SPEC",
  "FUNC_DECL", "FUNC_DECL_HEAD", "FUNC_DECL_NAME", "STMT_LIST",
  "MODIFIED_VAR", "MAYBE_PTR_VAR", "VAR_DECL", "WIDTH_SPEC", "ARG_DECL",
  "ARG_DECL_LIST", "ARRAY_SPEC", "EMPTY_OR_ARRAY_SPEC", "ARRAY_ELM",
  "ARRAY_ELM_LIST", "ARRAY_INITIALIZER", "VAR_DECL_STMT", "TYPE_NAME",
  "LABEL", "STMT", "EOS", "THREAD_DECL_STMT", "CHANNEL_DECL_STMT",
  "MAILBOX_DECL_STMT", "IF_COND_PART", "IF_WITH_ELSE", "IF_STMT",
  "FOR_HEAD", "FOR_COND_PART", "FOR_STMT", "WHILE_COND_PART", "WHILE_STMT",
  "DO_WHILE_HEAD", "DO_WHILE_BODY", "DO_WHILE_STMT", "SWITCH_STMT",
  "CASES_LIST", "CASE", "BLOCK", "BLOCK_HEAD", "ENUM_DECL",
  "ENUM_ITEM_LIST", "EXPR", "VAR", "FUNCALL_HEAD", "FUNCALL", "ARG_LIST", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    44,    63,
      58,   293,   294,   295,   124,    94,    38,    42,    33,   126,
     296,   297,    46,    91,    93,    40,    41,    64,   123,   125,
      35,    59
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -86,   219,   -86,   260,     7,   -86,   -86,   -86,   -86,     3,
       3,     3,     3,    58,    58,    -4,   156,   104,    76,   113,
      97,   -86,   117,   -86,    41,   -86,    58,    58,    58,    58,
     114,   -86,   -86,    98,   -86,     4,     0,   125,   -86,   -86,
     -86,   126,   126,   126,   128,     2,   -86,    58,   134,   -86,
     128,   -86,   128,   170,   -86,   -86,   -86,   -86,    -2,   136,
      58,   -86,   -86,    92,    46,   126,    25,    28,    30,    19,
     171,   144,    21,    21,    58,   -86,   136,   139,   126,    58,
     144,   126,    58,    58,   -86,   -86,    21,    21,    21,   402,
     151,   -86,   -86,     6,   314,    58,    13,   201,   -86,    92,
     -86,   -10,    92,   -86,   -86,   -86,   186,   -86,   -86,   647,
      58,   -86,   -86,   157,   273,   177,   -86,   -86,   164,    58,
      58,    58,    58,    58,   -86,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,   -86,   647,   165,   -86,
     184,   191,   -86,   113,   248,   248,   -86,   -86,   175,   -86,
     418,   -86,   -86,   -86,   355,   -86,   459,   475,   -86,   204,
     -86,    45,   -86,   181,   211,    92,   688,   188,   -86,   193,
     245,   -86,   -86,   -86,   -86,   -86,   516,    58,   -86,   -86,
       3,   164,   688,   433,   149,   808,    38,   688,   631,   701,
     741,   754,   758,   762,   804,    21,   -86,   573,   -86,   -86,
     -86,    24,   -86,   125,   125,   -86,   -86,   -86,   -86,   220,
     254,    89,   -86,    91,   330,   -86,   207,   302,   -86,   228,
     -86,    58,   128,   532,   164,    58,    58,   -86,   229,   -86,
     -86,   -86,   -86,   220,   -86,    93,   236,   -86,   204,   -86,
     -86,    19,   -86,   -86,   -86,   -86,   -86,    27,   688,   -86,
     -86,   118,   590,   -86,   -86,   -86,   238,   -86,   -86,   -86,
      95,   -86,   125,   228,   -86,   -86,   -86,    19,   -86,   -86,
     -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    11,     1,     0,     0,    59,    60,    62,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,   137,   110,   136,     0,     0,     0,     0,
       0,   106,    84,     0,     3,    48,     0,    37,    78,     4,
      64,     0,     0,     0,     0,     0,    72,     0,     0,    73,
       0,    74,     0,     0,    75,    76,    71,    24,     0,     0,
     142,   116,   138,     0,     0,     0,     0,     0,     0,    37,
      29,   110,   134,   133,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    63,   140,   119,   117,   118,     0,
       0,    21,    22,     0,    41,     0,     0,    49,    54,     0,
      77,     0,     0,    81,    82,    83,    90,    92,    91,    94,
       0,    97,    99,     0,     0,     0,    36,    66,    26,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,   143,     0,    35,
       0,     0,    79,     0,     0,     0,    33,    34,     0,    30,
       0,    69,    68,    67,     0,    80,     0,     0,   111,     0,
      24,     0,    43,     0,    42,     0,    55,     0,    46,     0,
      57,    38,    39,    40,    32,    89,     0,     0,   105,    25,
     138,    27,   123,   122,   120,   124,   125,   114,     0,   130,
     131,   126,   128,   129,   127,   121,   115,     0,   141,   139,
     108,     0,    85,    37,    37,    31,    88,    93,    96,     0,
       0,     0,     9,     0,     0,    23,    17,     0,    47,     0,
      56,     0,     0,     0,    28,     0,     0,   112,     0,   107,
      86,    87,   104,   101,   102,     0,     0,     8,     0,    12,
      19,    37,    20,    45,    44,    50,    51,     0,    58,    95,
     100,   135,     0,   109,   103,     7,     0,     6,    10,    15,
       0,    14,    37,     0,    53,   113,     5,    37,    18,    13,
      52,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,    43,   -86,   -86,    36,   -86,   -86,   -86,
     -86,   -86,   131,   -59,   -86,   -85,   -36,   -86,   -86,   -86,
     -86,    29,   -86,   -86,   -86,    -3,   -86,   293,    11,   -86,
     -86,   -86,   -86,   -86,   261,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,    72,   -38,   -86,   -71,   -86,
     -11,    10,   -86,    -9,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   211,   212,   213,    33,   259,   260,   242,    34,
      93,    94,   114,   116,    69,    35,   261,   163,   164,    97,
      98,   246,   247,   220,    36,    37,    38,   179,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   233,   234,    56,    57,    58,   201,
      59,   118,    60,    61,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      63,   102,    72,    73,   139,    76,   106,   108,    78,   162,
      81,    95,   111,    64,   112,    86,    87,    88,    89,    66,
      67,    68,    70,   165,    15,   171,   172,    75,     5,     6,
       7,     8,   143,   146,    62,   144,   109,   145,    99,    62,
     170,   124,    62,   174,    65,   115,   120,   100,   167,   137,
     173,    74,   103,   104,   105,   121,   122,    96,   124,    32,
      31,    32,   228,   150,   160,   263,   147,   168,   154,   117,
     136,   156,   157,   134,   135,    13,   142,   140,    14,   101,
     140,    84,   140,   229,   166,   133,   264,   151,   152,   153,
     134,   135,   155,    23,    71,    25,    85,   140,   140,   176,
     215,    91,    92,   161,   141,    26,    27,    28,   182,   183,
     184,   185,   186,    29,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   181,   120,   236,    62,   238,
     255,    79,   244,   267,   202,   121,   122,   123,   124,   115,
      77,   203,   204,   119,   120,   237,   165,   239,   256,    80,
      90,   268,    82,   121,   122,   123,   124,   126,   243,   127,
     128,   129,   130,   131,   132,   133,   223,   230,   231,   124,
     134,   135,    83,    13,   125,   126,    14,   127,   128,   129,
     130,   131,   132,   133,   249,   101,    31,    32,   134,   135,
     224,    23,    71,    25,    85,   110,   133,    32,   113,    85,
      32,   134,   135,    26,    27,    28,   159,   148,   169,   175,
     248,    29,   177,   180,   251,   252,   140,    32,   149,     2,
     199,   198,   205,   140,     3,     4,   269,   200,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   216,   262,    14,
     210,    15,   218,    16,    17,    18,    19,    20,    21,   217,
      22,   219,   221,   232,    23,    24,    25,     5,     6,     7,
       8,   235,   241,   245,   262,   253,    26,    27,    28,     5,
       6,     7,     8,   257,    29,   266,    30,    31,     3,     4,
      32,   258,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   214,   270,    14,    39,    15,    62,    16,    17,    18,
      19,    20,    21,   271,    22,   254,   107,     3,    23,    24,
      25,     5,     6,     7,     8,     0,     0,     0,    12,     3,
      26,    27,    28,     5,     6,     7,     8,     0,    29,     0,
      12,    31,   178,     0,    32,     3,     4,     0,    62,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,   115,
      14,     0,    15,     0,    16,    17,    18,    19,    20,    21,
       0,    22,   119,   120,     0,    23,    24,    25,     0,     0,
       0,     0,   121,   122,   123,   124,     0,    26,    27,    28,
       0,     0,     0,     0,     0,    29,     0,     0,    31,   240,
       0,    32,     0,   125,   126,     0,   127,   128,   129,   130,
     131,   132,   133,     0,     0,     0,     0,   134,   135,   119,
     120,     0,     0,     0,     0,     0,   207,     0,     0,   121,
     122,   123,   124,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,     0,
     125,   126,     0,   127,   128,   129,   130,   131,   132,   133,
     121,     0,     0,   124,   134,   135,   125,   126,   158,   127,
     128,   129,   130,   131,   132,   133,   119,   120,     0,     0,
     134,   135,     0,     0,   206,     0,   121,   122,   123,   124,
     133,     0,   119,   120,     0,   134,   135,     0,     0,     0,
       0,     0,   121,   122,   123,   124,     0,   125,   126,     0,
     127,   128,   129,   130,   131,   132,   133,     0,     0,     0,
       0,   134,   135,   125,   126,   208,   127,   128,   129,   130,
     131,   132,   133,   119,   120,     0,     0,   134,   135,     0,
       0,   209,     0,   121,   122,   123,   124,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,     0,   125,   126,     0,   127,   128,   129,
     130,   131,   132,   133,     0,     0,     0,     0,   134,   135,
     125,   126,   222,   127,   128,   129,   130,   131,   132,   133,
     119,   120,     0,     0,   134,   135,     0,     0,   250,     0,
     121,   122,   123,   124,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   226,   127,   128,   129,   130,   131,   132,
     133,     0,     0,     0,     0,   134,   135,   227,   125,   126,
       0,   127,   128,   129,   130,   131,   132,   133,   119,   120,
       0,     0,   134,   135,   265,     0,     0,     0,   121,   122,
     123,   124,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,     0,   125,
     126,   225,   127,   128,   129,   130,   131,   132,   133,     0,
       0,     0,     0,   134,   135,   125,   126,     0,   127,   128,
     129,   130,   131,   132,   133,   119,   120,     0,     0,   134,
     135,     0,     0,     0,     0,   121,   122,   123,   124,   120,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,     0,     0,     0,     0,     0,   126,     0,   127,
     128,   129,   130,   131,   132,   133,     0,     0,     0,     0,
     134,   135,     0,   128,   129,   130,   131,   132,   133,   120,
       0,     0,     0,   134,   135,     0,     0,     0,   121,   122,
     123,   124,   120,     0,     0,     0,   120,     0,     0,     0,
     120,   121,   122,   123,   124,   121,   122,   123,   124,   121,
     122,   123,   124,     0,   129,   130,   131,   132,   133,     0,
       0,     0,     0,   134,   135,     0,     0,     0,   130,   131,
     132,   133,     0,   131,   132,   133,   134,   135,   132,   133,
     134,   135,   120,     0,   134,   135,   120,     0,     0,     0,
       0,   121,   122,   123,   124,   121,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,   133,   134,   135,     0,     0,
     134,   135
};

static const yytype_int16 yycheck[] =
{
       3,    37,    13,    14,    63,    16,    44,    45,    17,    94,
      19,     7,    50,     3,    52,    26,    27,    28,    29,     9,
      10,    11,    12,    94,    22,    35,    36,    16,     9,    10,
      11,    12,     7,    69,    36,     7,    47,     7,    38,    36,
      99,    20,    36,   102,    37,    47,     8,    36,    35,    60,
      60,    55,    41,    42,    43,    17,    18,    53,    20,    61,
      58,    61,    38,    74,    58,    38,    69,    54,    79,    58,
      59,    82,    83,    52,    53,    17,    65,    52,    20,    60,
      52,    40,    52,    59,    95,    47,    59,    76,    77,    78,
      52,    53,    81,    35,    36,    37,    55,    52,    52,   110,
      55,     3,     4,    93,    58,    47,    48,    49,   119,   120,
     121,   122,   123,    55,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   115,     8,    38,    36,    38,
      37,    55,   217,    38,   143,    17,    18,    19,    20,    47,
      36,   144,   145,     7,     8,    56,   217,    56,    55,    36,
      36,    56,    55,    17,    18,    19,    20,    39,   217,    41,
      42,    43,    44,    45,    46,    47,   177,   203,   204,    20,
      52,    53,    55,    17,    38,    39,    20,    41,    42,    43,
      44,    45,    46,    47,   222,    60,    58,    61,    52,    53,
     180,    35,    36,    37,    55,    61,    47,    61,    28,    55,
      61,    52,    53,    47,    48,    49,    55,    36,     7,    23,
     221,    55,    55,    36,   225,   226,    52,    61,    47,     0,
      36,    56,    47,    52,     5,     6,   262,    36,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    56,   241,    20,
      36,    22,    54,    24,    25,    26,    27,    28,    29,    38,
      31,    58,     7,    33,    35,    36,    37,     9,    10,    11,
      12,     7,    55,    35,   267,    36,    47,    48,    49,     9,
      10,    11,    12,    37,    55,    37,    57,    58,     5,     6,
      61,   238,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   160,   263,    20,     1,    22,    36,    24,    25,    26,
      27,    28,    29,   267,    31,   233,    45,     5,    35,    36,
      37,     9,    10,    11,    12,    -1,    -1,    -1,    16,     5,
      47,    48,    49,     9,    10,    11,    12,    -1,    55,    -1,
      16,    58,    59,    -1,    61,     5,     6,    -1,    36,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    47,
      20,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,     7,     8,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    61,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    53,     7,
       8,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      17,    -1,    -1,    20,    52,    53,    38,    39,    56,    41,
      42,    43,    44,    45,    46,    47,     7,     8,    -1,    -1,
      52,    53,    -1,    -1,    56,    -1,    17,    18,    19,    20,
      47,    -1,     7,     8,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    38,    39,    56,    41,    42,    43,    44,
      45,    46,    47,     7,     8,    -1,    -1,    52,    53,    -1,
      -1,    56,    -1,    17,    18,    19,    20,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    53,
      38,    39,    56,    41,    42,    43,    44,    45,    46,    47,
       7,     8,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,     7,     8,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,     7,     8,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    17,    18,    19,    20,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    -1,    42,    43,    44,    45,    46,    47,     8,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    17,    18,
      19,    20,     8,    -1,    -1,    -1,     8,    -1,    -1,    -1,
       8,    17,    18,    19,    20,    17,    18,    19,    20,    17,
      18,    19,    20,    -1,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    44,    45,
      46,    47,    -1,    45,    46,    47,    52,    53,    46,    47,
      52,    53,     8,    -1,    52,    53,     8,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    47,    52,    53,    -1,    -1,
      52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,     5,     6,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    20,    22,    24,    25,    26,    27,
      28,    29,    31,    35,    36,    37,    47,    48,    49,    55,
      57,    58,    61,    67,    71,    77,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   108,   109,   110,   112,
     114,   115,    36,    87,   113,    37,   113,   113,   113,    76,
     113,    36,   112,   112,    55,    90,   112,    36,   115,    55,
      36,   115,    55,    55,    40,    55,   112,   112,   112,   112,
      36,     3,     4,    72,    73,     7,    53,    81,    82,    38,
      90,    60,    78,    90,    90,    90,   108,    96,   108,   112,
      61,   108,   108,    28,    74,    47,    75,    90,   113,     7,
       8,    17,    18,    19,    20,    38,    39,    41,    42,    43,
      44,    45,    46,    47,    52,    53,    90,   112,   116,    75,
      52,    58,    90,     7,     7,     7,    78,    87,    36,    47,
     112,    90,    90,    90,   112,    90,   112,   112,    56,    55,
      58,   113,    77,    79,    80,   110,   112,    35,    54,     7,
      75,    35,    36,    60,    75,    23,   112,    55,    59,    89,
      36,   113,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,    56,    36,
      36,   111,   115,    87,    87,    47,    56,    61,    56,    56,
      36,    64,    65,    66,    74,    55,    56,    38,    54,    58,
      85,     7,    56,   112,   113,    40,    40,    54,    38,    59,
      78,    78,    33,   106,   107,     7,    38,    56,    38,    56,
      59,    55,    70,    75,    77,    35,    83,    84,   112,   108,
      56,   112,   112,    36,   107,    37,    55,    37,    65,    68,
      69,    78,    87,    38,    59,    54,    37,    38,    56,    78,
      83,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      72,    72,    72,    73,    74,    74,    75,    75,    75,    76,
      76,    76,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    81,    81,    82,    82,
      83,    84,    84,    85,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    91,    92,    93,    94,    95,
      96,    96,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   106,   107,   108,   109,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   115,   116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     4,     3,     3,     2,     1,
       3,     0,     5,     2,     1,     1,     3,     0,     3,     5,
       4,     1,     1,     3,     0,     2,     1,     2,     3,     1,
       2,     3,     3,     3,     3,     3,     2,     0,     2,     2,
       2,     0,     1,     1,     3,     3,     2,     3,     0,     1,
       1,     1,     3,     3,     2,     3,     4,     3,     5,     1,
       1,     1,     1,     2,     1,     2,     2,     3,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       3,     2,     2,     2,     1,     4,     5,     5,     4,     3,
       2,     2,     2,     4,     2,     5,     4,     2,     1,     2,
       5,     5,     1,     2,     1,     3,     1,     5,     1,     3,
       1,     3,     4,     6,     3,     3,     1,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     5,     1,     1,     1,     3,
       2,     3,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 91 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1648 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1655 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1662 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 96 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.import_param) = synth::Importer::BuildStrParam((yyvsp[-3].sym), (yyvsp[0].str));
}
#line 1670 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  synth::Importer::AddStrParam((yyvsp[-2].import_param), (yyvsp[0].str));
  (yyval.import_param) = (yyvsp[-2].import_param);
}
#line 1679 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.import_param) = synth::Importer::BuildStrParam((yyvsp[-2].sym), (yyvsp[0].str));
}
#line 1687 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 105 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.import_param) = (yyvsp[-1].import_param);
}
#line 1695 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.import_params) = synth::Importer::BuildParamSet(nullptr, (yyvsp[0].import_param));
}
#line 1703 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 111 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.import_params) = synth::Importer::BuildParamSet((yyvsp[-2].import_params), (yyvsp[0].import_param));
}
#line 1711 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 115 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::SetImportedResource(nullptr);
}
#line 1719 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::SetImportedResource((yyvsp[-1].import_params));
}
#line 1727 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ReturnType((yyvsp[-1].sym), (yyvsp[0].width_spec).width, (yyvsp[0].width_spec).name);
}
#line 1735 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 123 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ReturnType(sym_int, (yyvsp[0].width_spec).width, (yyvsp[0].width_spec).name);
}
#line 1743 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 127 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
 (yyval.var_decl_set) = Builder::ReturnDeclList(nullptr, (yyvsp[0].var_decl));
}
#line 1751 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 129 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
 (yyval.var_decl_set) = Builder::ReturnDeclList((yyvsp[-2].var_decl_set), (yyvsp[0].var_decl));
}
#line 1759 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl_set) = Builder::ReturnDeclList(nullptr, nullptr);
}
#line 1767 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl_set) = (yyvsp[-1].var_decl_set);
}
#line 1775 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 139 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EndFunction();
}
#line 1783 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::SetCurrentFunctionParams();
  Emitter::SetCurrentFunctionArgs((yyvsp[-2].var_decl_set));
  Emitter::SetCurrentFunctionReturns((yyvsp[0].var_decl_set));
}
#line 1793 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 152 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::BeginFunction((yyvsp[-1].expr));
}
#line 1801 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 156 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1808 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 157 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1815 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 160 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ModifiedVar((yyvsp[0].expr), false, nullptr);
}
#line 1823 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ModifiedVar((yyvsp[0].expr), true, nullptr);
}
#line 1831 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 164 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ModifiedVar((yyvsp[0].expr), true, (yyvsp[-1].sym));
}
#line 1839 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 168 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ModifiedVar((yyvsp[0].expr), false, nullptr);
}
#line 1847 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 170 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ModifiedVar((yyvsp[-1].expr), true, nullptr);
}
#line 1855 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 172 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl) = Builder::ModifiedVar((yyvsp[-2].expr), true, (yyvsp[-1].sym));
}
#line 1863 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  // Obsoleted grammar.
  (yyval.var_decl) = Builder::BuildVarDecl((yyvsp[-2].sym), (yyvsp[-1].width_spec).width, (yyvsp[-1].width_spec).name, (yyvsp[0].var_decl));
}
#line 1872 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 179 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  // Current grammar.
  ScannerInterface::InSemiColonStatement();
  (yyval.var_decl) = Builder::BuildVarDecl(sym_int, (yyvsp[0].width_spec).width, (yyvsp[0].width_spec).name, (yyvsp[-1].var_decl));
}
#line 1882 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 183 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  // Ditto. Current grammar.
  ScannerInterface::InSemiColonStatement();
  (yyval.var_decl) = Builder::BuildVarDecl((yyvsp[0].sym), numeric::Width::MakeInt(false, 0), sym_null, (yyvsp[-1].var_decl));
}
#line 1892 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 187 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1899 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 188 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 1906 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 191 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.width_spec) = WidthSpec::Int(numeric::Width::MakeInt(false, 32));
}
#line 1914 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 193 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.width_spec) = WidthSpec::Int(numeric::Width::MakeInt(false, (yyvsp[0].num)));
}
#line 1922 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 195 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.width_spec) = WidthSpec::Name((yyvsp[0].sym));
}
#line 1930 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.width_spec) = WidthSpec::Int(numeric::Width::Null());
}
#line 1938 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 201 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  /* no arguments */
  (yyval.var_decl_set) = nullptr;
}
#line 1947 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 204 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl_set) = (yyvsp[0].var_decl_set);
}
#line 1955 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 208 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl_set) = Builder::ArgDeclList(nullptr, (yyvsp[0].var_decl));
}
#line 1963 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 210 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.var_decl_set) = Builder::ArgDeclList((yyvsp[-2].var_decl_set), (yyvsp[0].var_decl));
}
#line 1971 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 212 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  /* un-typed argument */
  (yyval.var_decl_set) = nullptr;
}
#line 1980 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 217 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.num) = 0;
}
#line 1988 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 219 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.num) = (yyvsp[-1].num);
}
#line 1996 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 223 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.num) = -1;
}
#line 2004 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 225 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.num) = (yyvsp[0].num);
}
#line 2012 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 229 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.num) = (yyvsp[0].num);
}
#line 2020 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 233 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ArrayInitializer *array = new ArrayInitializer;
  array->num_.push_back((yyvsp[0].num));
  (yyval.array) = array;
}
#line 2030 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 237 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyvsp[-2].array)->num_.push_back((yyvsp[0].num));
  (yyval.array) = (yyvsp[-2].array);
}
#line 2039 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 242 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.array) = (yyvsp[-1].array);
}
#line 2047 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 246 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  Builder::SetArrayLength((yyvsp[-1].var_decl), (yyvsp[0].num));
  (yyval.var_decl_set) = Builder::VarDeclList(nullptr, (yyvsp[-1].var_decl));
}
#line 2057 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 250 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  (yyvsp[-2].var_decl)->SetInitialVal((yyvsp[0].expr));
  (yyval.var_decl_set) = Builder::VarDeclList(nullptr, (yyvsp[-2].var_decl));
}
#line 2067 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 254 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  Builder::SetArrayLength((yyvsp[-3].var_decl), (yyvsp[-2].num));
  Builder::SetArrayInitializer((yyvsp[-3].var_decl), (yyvsp[0].array));
  (yyval.var_decl_set) = Builder::VarDeclList(nullptr, (yyvsp[-3].var_decl));
}
#line 2078 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 259 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  sym_t type = Builder::TypeNameFromVarDeclSet((yyvsp[-2].var_decl_set));
  WidthSpec w = Builder::GetWidthSpecFromVarDeclSet((yyvsp[-2].var_decl_set));
  (yyval.var_decl_set) = Builder::VarDeclList((yyvsp[-2].var_decl_set), Builder::BuildVarDecl(type, w.width, w.name, (yyvsp[0].var_decl)));
}
#line 2089 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  (yyval.var_decl_set) = Builder::VarDeclList((yyvsp[-4].var_decl_set), (yyvsp[-2].var_decl));
}
#line 2098 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 269 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.sym) = sym_int;
}
#line 2106 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 271 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.sym) = sym_bool;
}
#line 2114 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 273 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.sym) = sym_object;
}
#line 2122 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 275 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.sym) = sym_string;
}
#line 2130 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 280 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2137 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 283 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  /* empty stmt */
}
#line 2145 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 285 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitExprStmt((yyvsp[-1].expr));
}
#line 2153 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2160 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 288 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2167 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 289 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2174 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 290 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitReturnStmt((yyvsp[-1].expr));
}
#line 2182 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 292 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitReturnStmt(nullptr);
}
#line 2190 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 294 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2197 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 295 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2204 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 296 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2211 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 297 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2218 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 298 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2225 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 299 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2232 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 300 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitVarDeclStmtSet((yyvsp[-1].var_decl_set));
}
#line 2240 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 303 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitImportStmt((yyvsp[-1].str));
}
#line 2248 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 305 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitSpawnStmt((yyvsp[-1].expr));
}
#line 2256 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 307 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2263 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 308 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2270 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 309 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2277 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 313 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::EndSemiColonStatement();
}
#line 2285 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 317 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitThreadDeclStmt((yyvsp[-2].expr), (yyvsp[0].expr));
}
#line 2293 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 321 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitChannelDeclStmt((yyvsp[-3].expr), (yyvsp[-1].sym), (yyvsp[0].width_spec).width, (yyvsp[0].width_spec).name);
}
#line 2301 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 325 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitMailboxDeclStmt((yyvsp[-3].expr), (yyvsp[-1].sym), (yyvsp[0].width_spec).width, (yyvsp[0].width_spec).name);
}
#line 2309 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 329 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.stmt) = Emitter::EmitIfStmt((yyvsp[-1].expr));
  Emitter::EmitLabel((yyval.stmt)->label_t_);
}
#line 2318 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 334 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.stmt) = (yyvsp[-2].stmt);
  Emitter::EmitGoto((yyvsp[-2].stmt)->label_join_);
  Emitter::EmitLabel((yyvsp[-2].stmt)->label_f_);
}
#line 2328 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 340 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.block) = nullptr;
  Emitter::EmitLabel((yyvsp[-1].stmt)->label_f_);
  Emitter::EmitLabel((yyvsp[-1].stmt)->label_join_);
}
#line 2338 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 344 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.block) = nullptr;
  Emitter::EmitLabel((yyvsp[-1].stmt)->label_join_);
}
#line 2347 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 347 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.block) = nullptr;
  Emitter::EmitLabel((yyvsp[-1].stmt)->label_join_);
}
#line 2356 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 352 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::BeginBlock();
  Emitter::EmitExprStmt((yyvsp[-1].expr));
}
#line 2365 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 357 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.stmt) = Emitter::EmitForStmt((yyvsp[0].expr));
  Emitter::EmitLabel((yyval.stmt)->label_t_);
}
#line 2374 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 362 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  // join:
  // cond_expr
  // if (cond_expr)
  //  t:
  //  block
  //  repeat_expr
  // goto join:
  //  f:
  Emitter::EmitExprStmt((yyvsp[-2].expr));
  Emitter::EmitGoto((yyvsp[-4].stmt)->label_join_);
  Emitter::EmitLabel((yyvsp[-4].stmt)->label_f_);
  Emitter::EndBlock();
}
#line 2393 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 377 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::BeginBlock();
  // Emit a dummy insn before label_join so that compiler can
  // find a insn after the label.
  Emitter::EmitNop();
  (yyval.stmt) = Emitter::EmitWhileStmt((yyvsp[-1].expr));
  Emitter::EmitLabel((yyval.stmt)->label_t_);
}
#line 2406 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 386 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitGoto((yyvsp[-1].stmt)->label_join_);
  Emitter::EmitLabel((yyvsp[-1].stmt)->label_f_);
  Emitter::EndBlock();
}
#line 2416 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 392 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::BeginBlock();
  Emitter::EmitNop();
  (yyval.stmt) = Builder::DoWhileStmt();
  Emitter::EmitLabel((yyval.stmt)->label_join_);
}
#line 2427 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 399 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.stmt) = (yyvsp[-1].stmt);
}
#line 2435 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 403 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitDoWhileStmt((yyvsp[-4].stmt), (yyvsp[-1].expr));
  Emitter::EmitLabel((yyvsp[-4].stmt)->label_t_);
  Emitter::EmitGoto((yyvsp[-4].stmt)->label_join_);
  Emitter::EmitLabel((yyvsp[-4].stmt)->label_f_);
  Emitter::EndBlock();
}
#line 2447 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 411 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2454 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 414 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2461 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 415 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2468 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 418 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
}
#line 2475 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 421 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EndBlock();
}
#line 2483 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 425 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  /* open new bindings */
  Emitter::BeginBlock();
}
#line 2492 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 430 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  Emitter::EmitEnumTypeDeclStmt((yyvsp[-3].expr), (yyvsp[-1].enum_decl));
}
#line 2500 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 434 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.enum_decl) = Builder::EnumItemList(nullptr, (yyvsp[0].sym));
}
#line 2508 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 436 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.enum_decl) = Builder::EnumItemList((yyvsp[-2].enum_decl), (yyvsp[0].sym));
}
#line 2516 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 440 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  (yyval.expr) = Builder::SymExpr((yyvsp[0].sym));
}
#line 2525 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 443 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
}
#line 2533 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 445 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::ArrayRefExpr((yyvsp[-3].expr), (yyvsp[-1].expr));
}
#line 2541 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 447 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BitRangeRefExpr((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
}
#line 2549 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 449 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_COMMA);
}
#line 2557 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_ELM_REF);
}
#line 2565 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 453 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 2573 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 455 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::LogicInvertExpr((yyvsp[0].expr));
}
#line 2581 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 457 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BitInvertExpr((yyvsp[0].expr));
}
#line 2589 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 459 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::RefExpr((yyvsp[0].expr));
}
#line 2597 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 461 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].num));
}
#line 2605 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 463 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_MUL);
}
#line 2613 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 465 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].num));
}
#line 2621 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 467 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].num));
}
#line 2629 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 469 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].num));
}
#line 2637 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 471 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].num));
}
#line 2645 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 473 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_CONCAT);
}
#line 2653 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 475 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_AND);
}
#line 2661 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 477 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_OR);
}
#line 2669 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 479 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_XOR);
}
#line 2677 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 481 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_LOR);
}
#line 2685 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 483 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::BinopExpr((yyvsp[-2].expr), (yyvsp[0].expr), BINOP_LAND);
}
#line 2693 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 485 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::IncDecExpr((yyvsp[-1].expr), (yyvsp[0].num), true);
}
#line 2701 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 487 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::IncDecExpr((yyvsp[0].expr), (yyvsp[-1].num), false);
}
#line 2709 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 489 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::SignedExpr((yyvsp[-1].num), (yyvsp[0].expr));
}
#line 2717 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 491 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::TriTerm((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
}
#line 2725 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 493 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  (yyval.expr) = Builder::StrExpr((yyvsp[0].str));
}
#line 2734 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 496 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  ScannerInterface::InSemiColonStatement();
  (yyval.expr) = Builder::NumExpr((yyvsp[0].num));
}
#line 2743 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 501 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::SymExpr((yyvsp[0].sym));
}
#line 2751 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 503 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::ElmSymRefExpr((yyvsp[-2].expr), (yyvsp[0].sym));
}
#line 2759 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 507 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::SymExpr((yyvsp[-1].sym));
}
#line 2767 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 511 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = Builder::FuncallExpr((yyvsp[-2].expr), (yyvsp[-1].expr));
}
#line 2775 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 515 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = nullptr;
}
#line 2783 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 517 "src/fe/parser.ypp" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 2791 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
    break;


#line 2795 "src/fe/libparse_la-parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 521 "src/fe/parser.ypp" /* yacc.c:1906  */

