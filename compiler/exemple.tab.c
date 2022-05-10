
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "exemple.y"

	

#include <stdio.h>
#include <string.h>
#include <stdbool.h>	
#include <stdlib.h>
#include "semantic.c"
#include "genCode.c"
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;

int nbr_args = 0;
int nbr_param = 0;



/* Line 189 of yacc.c  */
#line 93 "exemple.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PSVM = 258,
     CLASS = 259,
     PUBLIC = 260,
     STATIC = 261,
     VOID = 262,
     MAIN = 263,
     EXTENDS = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     PRINT = 269,
     LENGTH = 270,
     THIS = 271,
     NEW = 272,
     POINT = 273,
     POINT_VIRGULE = 274,
     VIRGULE = 275,
     BOOLEAN = 276,
     INT = 277,
     STRING = 278,
     PAR_OUVRANTE = 279,
     PAR_FERMANTE = 280,
     ACO_OUVRANTE = 281,
     ACO_FERMANTE = 282,
     TAB_FERMANTE = 283,
     TAB_OUVRANTE = 284,
     AFFECTATION = 285,
     OPERATOR = 286,
     ID = 287,
     NUMBER = 288,
     BOOL = 289,
     NOT = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 170 "exemple.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   941

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  384

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    19,    27,    35,    43,
      51,    54,    56,    59,    62,    65,    67,    70,    72,    75,
      77,    81,    85,    89,    92,    94,    98,   102,   106,   110,
     112,   126,   140,   154,   168,   182,   196,   210,   224,   238,
     242,   246,   250,   252,   254,   256,   258,   269,   279,   289,
     299,   309,   319,   329,   336,   343,   350,   357,   364,   371,
     378,   383,   385,   390,   392,   401,   408,   415,   424,   429,
     432,   438,   444,   450,   456,   462,   467,   472,   477,   482,
     490,   498,   506,   514,   522,   530,   534,   538,   543,   548,
     553,   557,   561,   565,   572,   579,   586,   593,   600,   602,
     604,   606,   608,   610,   616,   622,   628,   634,   640,   645,
     650,   655,   660,   665,   668,   671,   675,   679,   683,   686,
     688,   692,   696,   698
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    50,    38,    -1,    39,    38,    -1,    59,
      -1,     4,    32,    40,    26,    41,    42,    27,    -1,     1,
      32,    40,    26,    41,    42,    27,    -1,     4,     1,    40,
      26,    41,    42,    27,    -1,     4,    32,    40,     1,    41,
      42,    27,    -1,     4,    32,    40,    26,    41,    42,     1,
      -1,     9,    32,    -1,    59,    -1,     1,    32,    -1,     4,
       1,    -1,    44,    41,    -1,    59,    -1,    48,    42,    -1,
      59,    -1,    55,    43,    -1,    59,    -1,    49,    32,    19,
      -1,    49,     1,    19,    -1,    49,    32,     1,    -1,    46,
      45,    -1,    59,    -1,    20,    49,    32,    -1,     1,    49,
      32,    -1,    20,    49,     1,    -1,    49,    32,    45,    -1,
      59,    -1,     5,    49,    32,    24,    47,    25,    26,    41,
      43,    10,    56,    19,    27,    -1,     1,    49,    32,    24,
      47,    25,    26,    41,    43,    10,    56,    19,    27,    -1,
       5,    49,     1,    24,    47,    25,    26,    41,    43,    10,
      56,    19,    27,    -1,     5,    49,    32,     1,    47,    25,
      26,    41,    43,    10,    56,    19,    27,    -1,     5,    49,
      32,    24,    47,     1,    26,    41,    43,    10,    56,    19,
      27,    -1,     5,    49,    32,    24,    47,    25,     1,    41,
      43,    10,    56,    19,    27,    -1,     5,    49,    32,    24,
      47,    25,    26,    41,    43,     1,    56,    19,    27,    -1,
       5,    49,    32,    24,    47,    25,    26,    41,    43,    10,
      56,     1,    27,    -1,     5,    49,    32,    24,    47,    25,
      26,    41,    43,    10,    56,    19,     1,    -1,    22,    29,
      28,    -1,    22,     1,    28,    -1,    22,    29,     1,    -1,
      21,    -1,    22,    -1,    32,    -1,     1,    -1,     4,    32,
      26,     3,    51,    26,    41,    55,    27,    27,    -1,     1,
      32,    26,     3,    51,    26,    55,    27,    27,    -1,     4,
       1,    26,     3,    51,    26,    55,    27,    27,    -1,     4,
      32,     1,     3,    51,    26,    55,    27,    27,    -1,     4,
      32,    26,     3,    51,     1,    55,    27,    27,    -1,     4,
      32,    26,     3,    51,    26,    55,     1,    27,    -1,     4,
      32,    26,     3,    51,    26,    55,    27,     1,    -1,    24,
      23,    29,    28,    32,    25,    -1,     1,    23,    29,    28,
      32,    25,    -1,    24,     1,    29,    28,    32,    25,    -1,
      24,    23,     1,    28,    32,    25,    -1,    24,    23,    29,
       1,    32,    25,    -1,    24,    23,    29,    28,     1,    25,
      -1,    24,    23,    29,    28,    32,     1,    -1,    13,    24,
      56,    25,    -1,    12,    -1,    11,    24,    56,    25,    -1,
      43,    -1,    54,    26,    55,    27,    53,    26,    55,    27,
      -1,    54,    26,    55,    27,    53,    55,    -1,    54,    55,
      53,    26,    55,    27,    -1,    54,    26,    55,    27,     1,
      26,    55,    27,    -1,    52,    26,    55,    27,    -1,    52,
      55,    -1,    14,    24,    56,    25,    19,    -1,     1,    24,
      56,    25,    19,    -1,    14,     1,    56,    25,    19,    -1,
      14,    24,    56,     1,    19,    -1,    14,    24,    56,    25,
       1,    -1,    32,    30,    56,    19,    -1,     1,    30,    56,
      19,    -1,    32,     1,    56,    19,    -1,    32,    30,    56,
       1,    -1,    32,    29,    56,    28,    30,    56,    19,    -1,
       1,    29,    56,    28,    30,    56,    19,    -1,    32,     1,
      56,    28,    30,    56,    19,    -1,    32,    29,    56,     1,
      30,    56,    19,    -1,    32,    29,    56,    28,     1,    56,
      19,    -1,    32,    29,    56,    28,    30,    56,     1,    -1,
      56,    31,    56,    -1,    56,     1,    56,    -1,    56,    29,
      56,    28,    -1,    56,     1,    56,    28,    -1,    56,    29,
      56,     1,    -1,    56,    18,    15,    -1,    56,     1,    15,
      -1,    56,    18,     1,    -1,    56,    18,    32,    24,    57,
      25,    -1,    56,     1,    32,    24,    57,    25,    -1,    56,
      18,     1,    24,    57,    25,    -1,    56,    18,    32,     1,
      57,    25,    -1,    56,    18,    32,    24,    57,     1,    -1,
      33,    -1,    34,    -1,    32,    -1,    16,    -1,     1,    -1,
      17,    22,    26,    56,    27,    -1,     1,    22,    26,    56,
      27,    -1,    17,     1,    26,    56,    27,    -1,    17,    22,
       1,    56,    27,    -1,    17,    22,    26,    56,     1,    -1,
      17,    32,    24,    25,    -1,     1,    32,    24,    25,    -1,
      17,     1,    24,    25,    -1,    17,    32,     1,    25,    -1,
      17,    32,    24,     1,    -1,    35,    56,    -1,     1,    56,
      -1,    24,    56,    25,    -1,     1,    56,    25,    -1,    24,
      56,     1,    -1,    56,    58,    -1,    59,    -1,    20,    56,
      58,    -1,     1,    56,    58,    -1,    59,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    72,    73,    76,    83,    84,    85,    86,
      88,    89,    90,    91,    94,    95,    97,    98,   100,   101,
     103,   107,   108,   110,   111,   113,   118,   119,   121,   126,
     128,   134,   135,   136,   137,   138,   139,   140,   141,   146,
     147,   148,   149,   150,   151,   152,   155,   156,   157,   158,
     159,   160,   161,   164,   165,   166,   167,   168,   169,   170,
     173,   177,   182,   187,   188,   190,   192,   194,   196,   201,
     205,   206,   207,   208,   209,   211,   216,   217,   218,   220,
     224,   225,   226,   227,   228,   231,   244,   246,   247,   248,
     250,   251,   252,   254,   260,   261,   262,   263,   266,   270,
     271,   272,   273,   275,   276,   277,   278,   279,   281,   282,
     283,   284,   285,   287,   288,   290,   291,   292,   295,   299,
     301,   306,   307,   310
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PSVM", "CLASS", "PUBLIC", "STATIC",
  "VOID", "MAIN", "EXTENDS", "RETURN", "IF", "ELSE", "WHILE", "PRINT",
  "LENGTH", "THIS", "NEW", "POINT", "POINT_VIRGULE", "VIRGULE", "BOOLEAN",
  "INT", "STRING", "PAR_OUVRANTE", "PAR_FERMANTE", "ACO_OUVRANTE",
  "ACO_FERMANTE", "TAB_FERMANTE", "TAB_OUVRANTE", "AFFECTATION",
  "OPERATOR", "ID", "NUMBER", "BOOL", "NOT", "$accept", "program",
  "ClassDeclarationG", "ClassDeclaration", "EXTENDSIDG", "VarDeclarationG",
  "MethodDeclarationG", "STATEMENTG", "VarDeclaration", "VTIG", "VTI",
  "TIVTIG", "MethodDeclaration", "Type", "MainClass", "ARG",
  "WHILESTATEMENT", "ELSESTATEMENT", "IFSTATEMENT", "STATEMENT",
  "EXPRESSION", "EVEXPRESSION", "VEXPRESSION", "epsilon", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      40,    40,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    44,    45,    45,    46,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      52,    53,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      58,    58,    58,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     3,     3,     2,     1,     3,     3,     3,     3,     1,
      13,    13,    13,    13,    13,    13,    13,    13,    13,     3,
       3,     3,     1,     1,     1,     1,    10,     9,     9,     9,
       9,     9,     9,     6,     6,     6,     6,     6,     6,     6,
       4,     1,     4,     1,     8,     6,     6,     8,     4,     2,
       5,     5,     5,     5,     5,     4,     4,     4,     4,     7,
       7,     7,     7,     7,     7,     3,     3,     4,     4,     4,
       3,     3,     3,     6,     6,     6,     6,     6,     1,     1,
       1,     1,     1,     5,     5,     5,     5,     5,     4,     4,
       4,     4,     4,     2,     2,     3,     3,     3,     2,     1,
       3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    42,     0,    44,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,    19,     0,
       0,     0,    45,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,    17,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      39,     0,     0,     6,    16,    21,    22,    20,     7,     8,
       9,     5,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,   100,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      47,    48,    49,    50,     0,    51,    52,     0,     0,     0,
      54,    55,    56,    57,    58,    59,    53,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    62,    60,     0,     0,     0,    77,     0,     0,
       0,     0,    75,    68,     0,     0,    46,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
       0,   115,    91,   100,     0,    92,    90,     0,    71,     0,
       0,     0,    72,    73,    74,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
     109,   110,     0,     0,     0,   111,   112,   108,     0,    88,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
     104,   105,   106,     0,   103,     0,     0,   119,     0,     0,
       0,    80,    81,    82,    83,     0,    79,     0,     0,     0,
       0,     0,    28,     0,    24,     0,     0,     0,     0,     0,
       0,     0,   118,   122,    94,    95,    96,    97,    93,    67,
      64,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    63,    26,    27,    25,    63,    63,    63,    63,
       0,   121,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    58,    91,   120,    59,   312,
     313,   253,    92,    60,     4,    35,    75,   169,    76,   121,
     234,   296,   322,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
     368,   -21,    19,    24,   225,    44,    59,   127,   -89,    58,
      95,   -89,   225,   -89,   108,   172,   182,   184,   443,   443,
     443,   -89,   164,   164,   164,   164,   162,   226,   213,   246,
     -89,   268,   264,   276,     9,   295,   300,   330,   299,   -89,
     -89,   -89,    92,    92,    92,    92,   335,   336,    21,   515,
     515,   515,   515,   530,   -89,   -89,    55,   -89,    20,   500,
     137,   -89,    20,    20,    20,   343,   347,   353,   161,   153,
     361,   384,   282,   230,   -89,   476,   547,   570,   -89,   576,
     585,   593,   153,     5,   515,   600,   -89,   394,   210,    85,
      85,   405,    20,   -89,   -89,   414,    72,   415,   416,    30,
     419,   428,   432,   435,   175,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   515,   229,   515,   192,   441,
     -89,   306,   444,   448,   452,   608,   488,   471,   -89,   -89,
     -89,   453,   178,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   466,   467,   468,   479,   481,     8,   117,   -89,
      94,   449,   -89,   -89,   -89,   449,   445,   373,   279,   693,
     750,   753,   771,   738,   759,   779,   615,   623,   -89,   483,
     -89,   -89,   -89,   -89,   480,   -89,   -89,   495,   496,   369,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   497,   501,   670,
     454,   321,   379,   791,   685,   404,   146,   511,   449,   449,
     508,   -89,   -89,   -89,   520,   269,   124,   -89,   510,   362,
       6,    88,   -89,   -89,    11,   515,   -89,   159,   159,   159,
     159,   449,   521,   -89,   528,   449,   449,   449,   531,   270,
      47,   -89,   -89,   544,   701,   545,   -89,   382,   -89,   800,
     716,   449,   -89,   -89,   -89,   -89,   449,   449,   449,   449,
     519,   523,   630,   549,   538,   -89,   550,   551,   348,   794,
     -89,   -89,   806,   812,   818,   -89,   -89,   -89,   424,   -89,
     424,   424,   424,   139,   -89,   833,   837,   841,   856,   860,
     515,   515,   553,   -89,   546,   262,   552,   556,   562,   322,
     -89,   -89,   -89,   326,   -89,   745,   566,   -89,   567,   568,
     351,   -89,   -89,   -89,   -89,   185,   -89,   638,   645,   413,
      85,    85,   -89,   262,   -89,   413,   413,   413,   413,   413,
     404,   449,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   653,   563,   189,   -89,   653,   653,   653,   653,   653,
     730,   745,   590,   -89,   -89,   -89,   595,   605,   613,   620,
     668,   -89,   -89,   449,   449,   449,   449,   449,   449,   449,
     864,   879,   883,   887,   902,   906,   910,   583,   591,   606,
     611,   618,   621,   383,    82,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   641,   -89,    -2,   -40,   170,    -7,   -89,   355,
     -89,    17,   -89,   -88,   -89,   406,   -89,   446,   -89,   -23,
     141,   183,    -6,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -124
static const yytype_int16 yytable[] =
{
      13,   131,   132,    62,    63,    64,   112,   248,    13,   185,
      47,     5,   250,    84,    30,    30,    30,    31,    32,    94,
       6,    89,    67,   168,     8,    90,    77,    79,    80,    81,
      85,   140,    48,   186,   113,   114,   249,   -44,    61,    61,
      61,    61,    74,    74,    74,    74,    74,  -123,   148,    86,
      68,     7,   116,   118,    93,    61,    87,   141,    93,    93,
      93,   125,   232,   149,   150,  -117,  -117,  -117,    74,    74,
      14,   151,  -117,   136,  -117,  -117,  -117,    74,  -117,   233,
     153,   154,   155,   382,    88,    15,    54,   -43,    93,   148,
      18,   137,   166,    54,   167,   190,    19,  -123,   -78,   -78,
     -78,   -78,   -78,   232,   149,   150,    55,    56,    74,   383,
      74,    22,   151,    55,    56,   -78,   191,    57,   148,  -123,
     233,   153,   154,   155,    57,   244,   192,    20,    16,   254,
     254,   254,   254,   149,   150,  -102,  -102,  -102,    95,   187,
     148,   151,  -102,   245,  -102,  -102,  -102,   235,  -102,   188,
     153,   154,   155,    17,   232,   149,   150,   -89,   -89,   -89,
      54,   236,   103,   151,   -89,    33,   -89,   -89,   -89,    96,
     -89,   233,   153,   154,   155,    23,   146,   105,   237,   178,
      55,    56,   106,   107,  -123,    24,   148,    25,    34,   104,
     344,    57,   252,    69,    39,   -84,   -84,   -84,   -84,   -84,
     232,   149,   150,    70,   168,    71,    72,   147,    74,   151,
     179,   129,   -84,   255,   255,   255,   255,   233,   153,   154,
     155,   345,   332,   333,    73,  -123,     9,    40,   282,    10,
      69,   112,    97,    98,    99,   256,   257,   258,   130,   -69,
      70,   -69,    71,    72,    74,    41,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   -69,   307,   308,   113,
     114,    73,   134,   310,   297,    44,   297,   297,   297,   331,
     148,   266,    42,    74,    74,   335,   336,   337,   338,   339,
     195,   314,   311,   110,   232,   149,   150,  -123,   243,   189,
      45,   323,   193,   151,    43,   267,   194,   196,   201,    46,
      52,   233,   153,   154,   155,    61,   111,    69,   198,   314,
     199,    61,    61,    61,    61,    61,  -123,    70,  -123,    71,
      72,    49,   226,   318,   342,    53,    50,   148,   346,   347,
     348,   349,   350,  -123,   351,   352,   323,   323,    73,   239,
     240,   232,   149,   150,  -107,  -107,  -107,   227,   319,   288,
     151,  -107,   327,  -107,  -107,  -107,    51,  -107,   233,   153,
     154,   155,   259,   148,    65,    66,   262,   263,   264,     1,
     219,   100,     2,   289,   195,   101,   328,   232,   149,   150,
     228,   102,   275,   271,   148,   108,   151,   276,   277,   278,
     279,   196,   247,   220,   233,   153,   154,   155,   232,   149,
     150,   200,   198,   229,   199,   148,   272,   151,   109,   295,
     381,   295,   295,   295,    54,   233,   153,   154,   155,   232,
     149,   150,   128,  -123,  -123,   148,  -123,  -123,   151,    36,
      37,    38,   133,   135,    55,    56,   233,   153,   154,   155,
     149,   150,   138,   139,    26,    57,   195,    27,   151,  -123,
     148,   142,    28,   298,   299,   300,   152,   153,   154,   155,
     143,   340,   341,   196,   144,   149,   150,   145,   170,  -123,
     197,   171,   176,   151,   198,   172,   199,    69,   224,   173,
     225,   152,   153,   154,   155,   177,  -123,    70,  -123,    71,
      72,   180,   181,   182,   360,   361,   362,   363,   364,   365,
     366,    54,   115,  -123,   183,  -123,   184,   216,    73,   215,
    -123,  -123,   105,  -123,  -123,   175,    69,   106,   107,   217,
     218,    55,    56,   221,    69,   222,    70,  -123,    71,    72,
     238,    82,    57,  -123,    70,  -123,    71,    72,   241,   242,
     246,    70,  -123,    71,    72,   280,   260,    73,    69,   281,
    -123,    55,    56,   261,    69,    73,   265,  -123,    70,  -123,
      71,    72,    83,   -65,    70,   -65,    71,    72,   268,   270,
     285,    69,   309,   117,   284,   286,   287,    69,   315,    73,
     -65,    70,   316,    71,    72,    73,    69,    70,   317,    71,
      72,   324,   325,   326,    69,   343,    70,   119,    71,    72,
     353,   126,    73,   122,    70,   354,    71,    72,    73,    69,
     375,    70,   123,    71,    72,   355,    69,    73,   376,    70,
     124,    71,    72,   356,    69,    73,    70,   127,    71,    72,
     357,    69,    73,   377,    70,   174,    71,    72,   378,    69,
      73,    70,   213,    71,    72,   379,    69,    73,   380,    70,
     214,    71,    72,    21,    69,    73,    70,   283,    71,    72,
     251,     0,    73,  -123,    70,   329,    71,    72,   334,   358,
      73,   195,   330,     0,     0,     0,     0,    73,   359,   -63,
       0,   -63,   -63,     0,     0,    73,   195,     0,   196,  -114,
    -114,     0,     0,     0,   195,   223,     0,  -114,  -114,   198,
     -63,   199,   195,   196,  -113,  -113,     0,     0,     0,     0,
    -113,   196,  -113,  -113,   198,     0,   199,   195,   202,   196,
     -86,   -86,   198,     0,   199,     0,   -86,     0,   -86,   269,
     198,   320,   199,     0,   196,   -85,   -85,     0,     0,   195,
       0,   -85,     0,   -85,   -85,   198,   320,   199,   196,     0,
     321,   195,     0,     0,   195,   -86,   196,   207,   269,   198,
     209,   199,     0,   196,     0,   321,   208,   198,   196,   199,
    -123,   196,   205,     0,   198,   203,   199,   196,   204,   198,
     211,   199,   198,     0,   199,     0,     0,   210,   198,   196,
     199,     0,   230,     0,     0,   195,   206,   196,   212,     0,
     198,   273,   199,     0,     0,     0,     0,   195,   198,   196,
     199,     0,   196,   195,     0,     0,   231,     0,   196,   293,
     198,   290,   199,   198,   196,   199,     0,     0,   274,   198,
     196,   199,     0,   291,   195,   198,   196,   199,   195,   292,
       0,   198,   195,   199,     0,   294,     0,   198,     0,   199,
       0,   196,   301,     0,     0,   196,   302,   195,     0,   196,
     303,   305,   198,     0,   199,   195,   198,     0,   199,     0,
     198,     0,   199,     0,   196,   304,     0,     0,   196,   306,
     195,     0,   196,   367,   195,   198,     0,   199,   195,   198,
       0,   199,     0,   198,     0,   199,     0,   196,   368,     0,
       0,   196,   369,   195,     0,   196,   370,   195,   198,     0,
     199,   373,   198,     0,   199,     0,   198,     0,   199,     0,
     196,   371,     0,     0,   196,   372,     0,     0,   196,   374,
       0,   198,     0,   199,     0,   198,     0,   199,     0,   198,
       0,   199
};

static const yytype_int16 yycheck[] =
{
       4,    89,    90,    43,    44,    45,     1,     1,    12,     1,
       1,    32,     1,    53,    18,    19,    20,    19,    20,    59,
       1,     1,     1,    12,     0,     5,    49,    50,    51,    52,
      53,     1,    23,    25,    29,    30,    30,    32,    42,    43,
      44,    45,    49,    50,    51,    52,    53,    27,     1,    53,
      29,    32,    75,    76,    58,    59,     1,    27,    62,    63,
      64,    84,    15,    16,    17,    18,    19,    20,    75,    76,
      26,    24,    25,     1,    27,    28,    29,    84,    31,    32,
      33,    34,    35,     1,    29,    26,     1,    32,    92,     1,
      32,    19,   115,     1,   117,     1,     1,     5,    10,    11,
      12,    13,    14,    15,    16,    17,    21,    22,   115,    27,
     117,     3,    24,    21,    22,    27,    22,    32,     1,    27,
      32,    33,    34,    35,    32,     1,    32,    32,     1,   217,
     218,   219,   220,    16,    17,    18,    19,    20,     1,    22,
       1,    24,    25,    19,    27,    28,    29,     1,    31,    32,
      33,    34,    35,    26,    15,    16,    17,    18,    19,    20,
       1,    15,     1,    24,    25,     1,    27,    28,    29,    32,
      31,    32,    33,    34,    35,     3,     1,    24,    32,     1,
      21,    22,    29,    30,    25,     3,     1,     3,    24,    28,
       1,    32,   215,     1,    32,    10,    11,    12,    13,    14,
      15,    16,    17,    11,    12,    13,    14,    32,   215,    24,
      32,     1,    27,   217,   218,   219,   220,    32,    33,    34,
      35,    32,   310,   311,    32,     0,     1,     1,   251,     4,
       1,     1,    62,    63,    64,   218,   219,   220,    28,    10,
      11,    12,    13,    14,   251,    32,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    27,   280,   281,    29,
      30,    32,    92,     1,   268,     1,   270,   271,   272,   309,
       1,     1,    26,   280,   281,   315,   316,   317,   318,   319,
       1,   285,    20,     1,    15,    16,    17,    25,    19,   148,
      26,   295,   151,    24,    26,    25,   155,    18,    19,    23,
       1,    32,    33,    34,    35,   309,    24,     1,    29,   313,
      31,   315,   316,   317,   318,   319,    10,    11,    12,    13,
      14,    26,     1,     1,   331,    26,    26,     1,   335,   336,
     337,   338,   339,    27,   340,   341,   340,   341,    32,   198,
     199,    15,    16,    17,    18,    19,    20,    26,    26,     1,
      24,    25,     1,    27,    28,    29,    26,    31,    32,    33,
      34,    35,   221,     1,    29,    29,   225,   226,   227,     1,
       1,    28,     4,    25,     1,    28,    25,    15,    16,    17,
       1,    28,   241,     1,     1,    24,    24,   246,   247,   248,
     249,    18,    30,    24,    32,    33,    34,    35,    15,    16,
      17,    28,    29,    24,    31,     1,    24,    24,    24,   268,
      27,   270,   271,   272,     1,    32,    33,    34,    35,    15,
      16,    17,    28,    10,    11,     1,    13,    14,    24,    23,
      24,    25,    27,    19,    21,    22,    32,    33,    34,    35,
      16,    17,    27,    27,     1,    32,     1,     4,    24,    25,
       1,    32,     9,   270,   271,   272,    32,    33,    34,    35,
      32,   320,   321,    18,    32,    16,    17,    32,    27,    26,
      25,    27,     1,    24,    29,    27,    31,     1,    24,    27,
      26,    32,    33,    34,    35,    32,    10,    11,    12,    13,
      14,    25,    25,    25,   353,   354,   355,   356,   357,   358,
     359,     1,    26,    27,    25,     5,    25,    27,    32,    26,
      10,    11,    24,    13,    14,    27,     1,    29,    30,    24,
      24,    21,    22,    26,     1,    24,    11,    27,    13,    14,
      19,     1,    32,    10,    11,    12,    13,    14,    30,    19,
      30,    11,    27,    13,    14,    26,    25,    32,     1,    26,
      27,    21,    22,    25,     1,    32,    25,    27,    11,    12,
      13,    14,    32,    10,    11,    12,    13,    14,    24,    24,
      32,     1,    26,    26,    25,    25,    25,     1,    26,    32,
      27,    11,    26,    13,    14,    32,     1,    11,    26,    13,
      14,    25,    25,    25,     1,    32,    11,    27,    13,    14,
      10,     1,    32,    27,    11,    10,    13,    14,    32,     1,
      27,    11,    27,    13,    14,    10,     1,    32,    27,    11,
      27,    13,    14,    10,     1,    32,    11,    27,    13,    14,
      10,     1,    32,    27,    11,    27,    13,    14,    27,     1,
      32,    11,    27,    13,    14,    27,     1,    32,    27,    11,
      27,    13,    14,    12,     1,    32,    11,    27,    13,    14,
     214,    -1,    32,    10,    11,    27,    13,    14,   313,     1,
      32,     1,    27,    -1,    -1,    -1,    -1,    32,    10,    11,
      -1,    13,    14,    -1,    -1,    32,     1,    -1,    18,    19,
      20,    -1,    -1,    -1,     1,    25,    -1,    27,    28,    29,
      32,    31,     1,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    18,    27,    28,    29,    -1,    31,     1,    25,    18,
      19,    20,    29,    -1,    31,    -1,    25,    -1,    27,    28,
      29,     1,    31,    -1,    18,    19,    20,    -1,    -1,     1,
      -1,    25,    -1,    27,    28,    29,     1,    31,    18,    -1,
      20,     1,    -1,    -1,     1,    25,    18,    19,    28,    29,
       1,    31,    -1,    18,    -1,    20,    28,    29,    18,    31,
      25,    18,     1,    -1,    29,    25,    31,    18,    25,    29,
       1,    31,    29,    -1,    31,    -1,    -1,    28,    29,    18,
      31,    -1,     1,    -1,    -1,     1,    25,    18,    19,    -1,
      29,     1,    31,    -1,    -1,    -1,    -1,     1,    29,    18,
      31,    -1,    18,     1,    -1,    -1,    25,    -1,    18,     1,
      29,    27,    31,    29,    18,    31,    -1,    -1,    28,    29,
      18,    31,    -1,    27,     1,    29,    18,    31,     1,    27,
      -1,    29,     1,    31,    -1,    27,    -1,    29,    -1,    31,
      -1,    18,    19,    -1,    -1,    18,    19,     1,    -1,    18,
      19,     1,    29,    -1,    31,     1,    29,    -1,    31,    -1,
      29,    -1,    31,    -1,    18,    19,    -1,    -1,    18,    19,
       1,    -1,    18,    19,     1,    29,    -1,    31,     1,    29,
      -1,    31,    -1,    29,    -1,    31,    -1,    18,    19,    -1,
      -1,    18,    19,     1,    -1,    18,    19,     1,    29,    -1,
      31,     1,    29,    -1,    31,    -1,    29,    -1,    31,    -1,
      18,    19,    -1,    -1,    18,    19,    -1,    -1,    18,    19,
      -1,    29,    -1,    31,    -1,    29,    -1,    31,    -1,    29,
      -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    37,    50,    32,     1,    32,     0,     1,
       4,    38,    39,    59,    26,    26,     1,    26,    32,     1,
      32,    38,     3,     3,     3,     3,     1,     4,     9,    40,
      59,    40,    40,     1,    24,    51,    51,    51,    51,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    32,    41,    44,
      49,    59,    41,    41,    41,    29,    29,     1,    29,     1,
      11,    13,    14,    32,    43,    52,    54,    55,    59,    55,
      55,    55,     1,    32,    41,    55,    59,     1,    29,     1,
       5,    42,    48,    59,    41,     1,    32,    42,    42,    42,
      28,    28,    28,     1,    28,    24,    29,    30,    24,    24,
       1,    24,     1,    29,    30,    26,    55,    26,    55,    27,
      43,    55,    27,    27,    27,    55,     1,    27,    28,     1,
      28,    49,    49,    27,    42,    19,     1,    19,    27,    27,
       1,    27,    32,    32,    32,    32,     1,    32,     1,    16,
      17,    24,    32,    33,    34,    35,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    55,    55,    12,    53,
      27,    27,    27,    27,    27,    27,     1,    32,     1,    32,
      25,    25,    25,    25,    25,     1,    25,    22,    32,    56,
       1,    22,    32,    56,    56,     1,    18,    25,    29,    31,
      28,    19,    25,    25,    25,     1,    25,    19,    28,     1,
      28,     1,    19,    27,    27,    26,    27,    24,    24,     1,
      24,    26,    24,    25,    24,    26,     1,    26,     1,    24,
       1,    25,    15,    32,    56,     1,    15,    32,    19,    56,
      56,    30,    19,    19,     1,    19,    30,    30,     1,    30,
       1,    53,    55,    47,    49,    59,    47,    47,    47,    56,
      25,    25,    56,    56,    56,    25,     1,    25,    24,    28,
      24,     1,    24,     1,    28,    56,    56,    56,    56,    56,
      26,    26,    55,    27,    25,    32,    25,    25,     1,    25,
      27,    27,    27,     1,    27,    56,    57,    59,    57,    57,
      57,    19,    19,    19,    19,     1,    19,    55,    55,    26,
       1,    20,    45,    46,    59,    26,    26,    26,     1,    26,
       1,    20,    58,    59,    25,    25,    25,     1,    25,    27,
      27,    41,    49,    49,    45,    41,    41,    41,    41,    41,
      56,    56,    43,    32,     1,    32,    43,    43,    43,    43,
      43,    58,    58,    10,    10,    10,    10,    10,     1,    10,
      56,    56,    56,    56,    56,    56,    56,    19,    19,    19,
      19,    19,    19,     1,    19,    27,    27,    27,    27,    27,
      27,    27,     1,    27
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 77 "exemple.y"
    {       
                                verif_var_dec_bien_init_use();
                                insert_code(  (yyvsp[(7) - (7)]),-1, "");
                                affiche();
                                
                        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 83 "exemple.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 84 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 85 "exemple.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 86 "exemple.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 90 "exemple.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 104 "exemple.y"
    {
                                insert_declaration((yyvsp[(2) - (3)]), "global", (yyvsp[(1) - (3)]), 0, 0 , 0);
                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 107 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 108 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 114 "exemple.y"
    {
                                insert_declaration((yyvsp[(3) - (3)]),"args","variable",0,0,0);
                                nbr_args++;
                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 118 "exemple.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 119 "exemple.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 122 "exemple.y"
    {
                                insert_declaration((yyvsp[(2) - (3)]),"args","variable",0,0,0);
                                nbr_args++;
                        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 129 "exemple.y"
    {
                                insert_declaration((yyvsp[(3) - (13)]),"global","methode",0,0,nbr_args);
                                nbr_args = 0;

                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 134 "exemple.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 135 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 136 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 137 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 138 "exemple.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 139 "exemple.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 140 "exemple.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 141 "exemple.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 147 "exemple.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 148 "exemple.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 152 "exemple.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 156 "exemple.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 157 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 158 "exemple.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 159 "exemple.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 160 "exemple.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 161 "exemple.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 165 "exemple.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 166 "exemple.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 167 "exemple.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 168 "exemple.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 169 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 170 "exemple.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 174 "exemple.y"
    {
                                insert_code( (yyvsp[(1) - (4)]),-1, "");
                        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 178 "exemple.y"
    {
                                insert_code("ELSE", -1, "");
                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 183 "exemple.y"
    {
                                insert_code("IF", -1, "");
                        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 194 "exemple.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 197 "exemple.y"
    {
                                insert_code( "SORTIE TANT QUE",-1, "");
                        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 206 "exemple.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 207 "exemple.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 208 "exemple.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 209 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 212 "exemple.y"
    {      init_var((yyvsp[(1) - (4)]));
                                use_var((yyvsp[(1) - (4)]));
                                insert_code(  (yyvsp[(2) - (4)])  ,search_index_element_code((yyvsp[(1) - (4)])), "");
                        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 216 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 217 "exemple.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 218 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 221 "exemple.y"
    {      
                                insert_code(  (yyvsp[(5) - (7)])  ,-1, "");
                        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 224 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 225 "exemple.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 226 "exemple.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 227 "exemple.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 228 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 232 "exemple.y"
    {     
                                use_var((yyvsp[(1) - (3)])); 
                                use_var((yyvsp[(3) - (3)]));
                                int index=search_index_element_code((yyvsp[(1) - (3)]));
                                if (index>-1)
                                insert_code("LDV",index,"");
                                int index1=search_index_element_code((yyvsp[(3) - (3)]));
                                if (index1>-1)
                                insert_code("LDV",index1,"");
                                insert_code((yyvsp[(2) - (3)]),-1,"");
                                
                        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 244 "exemple.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 247 "exemple.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 248 "exemple.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 251 "exemple.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 252 "exemple.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 255 "exemple.y"
    {
                                verif_args((yyvsp[(3) - (6)]),nbr_param);
                                nbr_param = 0;
                        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 260 "exemple.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 261 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 262 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 263 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 267 "exemple.y"
    {
                          insert_code("LDC",atoi((yyvsp[(1) - (1)])), "");
                        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 273 "exemple.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 276 "exemple.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 277 "exemple.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 278 "exemple.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 279 "exemple.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 282 "exemple.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 283 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 284 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 285 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 288 "exemple.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 291 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 292 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 296 "exemple.y"
    {
                                nbr_param++;
                        ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 302 "exemple.y"
    {
                                nbr_param++;
                        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 306 "exemple.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2424 "exemple.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 318 "exemple.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

main()
{
 yyparse();
 
}
