
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
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;



/* Line 189 of yacc.c  */
#line 85 "exemple.tab.c"

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
#line 162 "exemple.tab.c"

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
#define YYLAST   1053

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  410

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
     242,   246,   250,   252,   254,   256,   258,   268,   278,   288,
     298,   308,   318,   328,   335,   342,   349,   356,   363,   370,
     377,   379,   391,   401,   411,   423,   435,   447,   459,   467,
     473,   481,   489,   497,   503,   509,   515,   521,   527,   532,
     537,   542,   547,   555,   563,   571,   579,   587,   595,   599,
     603,   608,   613,   618,   622,   626,   630,   637,   644,   651,
     658,   665,   667,   669,   671,   673,   675,   681,   687,   693,
     699,   705,   710,   715,   720,   725,   730,   733,   736,   740,
     744,   748,   751,   753,   757,   761,   763
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    50,    38,    -1,    39,    38,    -1,    56,
      -1,     4,    32,    40,    26,    41,    42,    27,    -1,     1,
      32,    40,    26,    41,    42,    27,    -1,     4,     1,    40,
      26,    41,    42,    27,    -1,     4,    32,    40,     1,    41,
      42,    27,    -1,     4,    32,    40,    26,    41,    42,     1,
      -1,     9,    32,    -1,    56,    -1,     1,    32,    -1,     4,
       1,    -1,    44,    41,    -1,    56,    -1,    48,    42,    -1,
      56,    -1,    52,    43,    -1,    56,    -1,    49,    32,    19,
      -1,    49,     1,    19,    -1,    49,    32,     1,    -1,    46,
      45,    -1,    56,    -1,    20,    49,    32,    -1,     1,    49,
      32,    -1,    20,    49,     1,    -1,    49,    32,    45,    -1,
      56,    -1,     5,    49,    32,    24,    47,    25,    26,    41,
      43,    10,    53,    19,    27,    -1,     1,    49,    32,    24,
      47,    25,    26,    41,    43,    10,    53,    19,    27,    -1,
       5,    49,     1,    24,    47,    25,    26,    41,    43,    10,
      53,    19,    27,    -1,     5,    49,    32,     1,    47,    25,
      26,    41,    43,    10,    53,    19,    27,    -1,     5,    49,
      32,    24,    47,     1,    26,    41,    43,    10,    53,    19,
      27,    -1,     5,    49,    32,    24,    47,    25,     1,    41,
      43,    10,    53,    19,    27,    -1,     5,    49,    32,    24,
      47,    25,    26,    41,    43,     1,    53,    19,    27,    -1,
       5,    49,    32,    24,    47,    25,    26,    41,    43,    10,
      53,     1,    27,    -1,     5,    49,    32,    24,    47,    25,
      26,    41,    43,    10,    53,    19,     1,    -1,    22,    29,
      28,    -1,    22,     1,    28,    -1,    22,    29,     1,    -1,
      21,    -1,    22,    -1,    32,    -1,     1,    -1,     4,    32,
      26,     3,    51,    26,    52,    27,    27,    -1,     1,    32,
      26,     3,    51,    26,    52,    27,    27,    -1,     4,     1,
      26,     3,    51,    26,    52,    27,    27,    -1,     4,    32,
       1,     3,    51,    26,    52,    27,    27,    -1,     4,    32,
      26,     3,    51,     1,    52,    27,    27,    -1,     4,    32,
      26,     3,    51,    26,    52,     1,    27,    -1,     4,    32,
      26,     3,    51,    26,    52,    27,     1,    -1,    24,    23,
      29,    28,    32,    25,    -1,     1,    23,    29,    28,    32,
      25,    -1,    24,     1,    29,    28,    32,    25,    -1,    24,
      23,     1,    28,    32,    25,    -1,    24,    23,    29,     1,
      32,    25,    -1,    24,    23,    29,    28,     1,    25,    -1,
      24,    23,    29,    28,    32,     1,    -1,    43,    -1,    11,
      24,    53,    25,    26,    52,    27,    12,    26,    52,    27,
      -1,    11,    24,    53,    25,    26,    52,    27,    12,    52,
      -1,    11,    24,    53,    25,    52,    12,    26,    52,    27,
      -1,     1,    24,    53,    25,    26,    52,    27,    12,    26,
      52,    27,    -1,    11,     1,    53,    25,    26,    52,    27,
      12,    26,    52,    27,    -1,    11,    24,    53,     1,    26,
      52,    27,    12,    26,    52,    27,    -1,    11,    24,    53,
      25,    26,    52,    27,     1,    26,    52,    27,    -1,    13,
      24,    53,    25,    26,    52,    27,    -1,    13,    24,    53,
      25,    52,    -1,     1,    24,    53,    25,    26,    52,    27,
      -1,    13,     1,    53,    25,    26,    52,    27,    -1,    13,
      24,    53,     1,    26,    52,    27,    -1,    14,    24,    53,
      25,    19,    -1,     1,    24,    53,    25,    19,    -1,    14,
       1,    53,    25,    19,    -1,    14,    24,    53,     1,    19,
      -1,    14,    24,    53,    25,     1,    -1,    32,    30,    53,
      19,    -1,     1,    30,    53,    19,    -1,    32,     1,    53,
      19,    -1,    32,    30,    53,     1,    -1,    32,    29,    53,
      28,    30,    53,    19,    -1,     1,    29,    53,    28,    30,
      53,    19,    -1,    32,     1,    53,    28,    30,    53,    19,
      -1,    32,    29,    53,     1,    30,    53,    19,    -1,    32,
      29,    53,    28,     1,    53,    19,    -1,    32,    29,    53,
      28,    30,    53,     1,    -1,    53,    31,    53,    -1,    53,
       1,    53,    -1,    53,    29,    53,    28,    -1,    53,     1,
      53,    28,    -1,    53,    29,    53,     1,    -1,    53,    18,
      15,    -1,    53,     1,    15,    -1,    53,    18,     1,    -1,
      53,    18,    32,    24,    54,    25,    -1,    53,     1,    32,
      24,    54,    25,    -1,    53,    18,     1,    24,    54,    25,
      -1,    53,    18,    32,     1,    54,    25,    -1,    53,    18,
      32,    24,    54,     1,    -1,    33,    -1,    34,    -1,    32,
      -1,    16,    -1,     1,    -1,    17,    22,    26,    53,    27,
      -1,     1,    22,    26,    53,    27,    -1,    17,     1,    26,
      53,    27,    -1,    17,    22,     1,    53,    27,    -1,    17,
      22,    26,    53,     1,    -1,    17,    32,    24,    25,    -1,
       1,    32,    24,    25,    -1,    17,     1,    24,    25,    -1,
      17,    32,     1,    25,    -1,    17,    32,    24,     1,    -1,
      35,    53,    -1,     1,    53,    -1,    24,    53,    25,    -1,
       1,    53,    25,    -1,    24,    53,     1,    -1,    53,    55,
      -1,    56,    -1,    20,    53,    55,    -1,     1,    53,    55,
      -1,    56,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    68,    69,    72,    73,    74,    75,    76,
      78,    79,    80,    81,    84,    85,    87,    88,    90,    91,
      93,    94,    95,    97,    98,   100,   101,   102,   104,   105,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   120,
     121,   122,   123,   124,   125,   126,   129,   130,   131,   132,
     133,   134,   135,   138,   139,   140,   141,   142,   143,   144,
     149,   150,   151,   152,   153,   154,   155,   156,   158,   159,
     160,   161,   162,   164,   165,   166,   167,   168,   170,   171,
     172,   173,   175,   176,   177,   178,   179,   180,   183,   184,
     186,   187,   188,   190,   191,   192,   194,   195,   196,   197,
     198,   201,   202,   203,   204,   205,   207,   208,   209,   210,
     211,   213,   214,   215,   216,   217,   219,   220,   222,   223,
     224,   227,   228,   230,   231,   232,   235
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
  "TIVTIG", "MethodDeclaration", "Type", "MainClass", "ARG", "STATEMENT",
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
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    55,    55,    55,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     3,     3,     2,     1,     3,     3,     3,     3,     1,
      13,    13,    13,    13,    13,    13,    13,    13,    13,     3,
       3,     3,     1,     1,     1,     1,     9,     9,     9,     9,
       9,     9,     9,     6,     6,     6,     6,     6,     6,     6,
       1,    11,     9,     9,    11,    11,    11,    11,     7,     5,
       7,     7,     7,     5,     5,     5,     5,     5,     4,     4,
       4,     4,     7,     7,     7,     7,     7,     7,     3,     3,
       4,     4,     4,     3,     3,     3,     6,     6,     6,     6,
       6,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     2,     2,     3,     3,
       3,     2,     1,     3,     3,     1,     0
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
       0,     0,     0,     0,    60,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    40,
      41,    39,     0,     0,     6,    16,    21,    22,    20,     7,
       8,     9,     5,     0,     0,     0,     0,     0,     0,     0,
     104,     0,     0,   103,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,    51,    52,    46,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    53,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
     118,    94,   103,     0,    95,    93,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    73,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,   112,   113,     0,     0,     0,
     114,   115,   111,     0,    91,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,     0,   106,     0,     0,   122,     0,     0,     0,
      70,    83,     0,     0,     0,     0,    71,    72,    68,    84,
      85,    86,     0,    82,     0,     0,     0,    28,     0,    24,
       0,     0,     0,     0,     0,     0,     0,   121,   125,    97,
      98,    99,   100,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    60,    26,
      27,    25,    60,    60,    60,    60,     0,   124,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    58,    85,   112,    59,   317,
     318,   248,    86,    60,     4,    35,   113,   223,   295,   327,
      76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
     127,    -5,    12,    76,   440,    65,    85,    93,   -67,   100,
      18,   -67,   440,   -67,   215,   275,   281,   289,   251,   251,
     251,   -67,   109,   109,   109,   109,   180,   322,   358,   335,
     -67,   344,   200,   375,   310,   373,   379,   388,   228,   -67,
     -67,   -67,   571,   571,   571,   571,   389,   398,     0,   547,
     547,   547,   547,   547,   -67,   -67,    97,   -67,   179,   541,
      29,   -67,   179,   179,   179,   397,   414,   418,   111,   148,
     206,   270,   285,   144,   -67,   586,   -67,   593,   608,   615,
     623,   432,   170,   126,   126,   434,   179,   -67,   -67,   448,
     209,   444,   446,    88,   449,   453,   454,   457,   129,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   465,   -67,    10,   493,   494,   497,   362,   196,   -67,
     -67,   -67,   462,   156,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   500,   503,   504,   518,   519,     6,    46,
     -67,   143,   506,   -67,   -67,   -67,   506,   338,   774,   828,
     833,   836,   851,   859,   867,   877,   284,   882,   885,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   521,   523,   326,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   524,   525,   752,   395,
     263,   342,   900,   766,   467,    11,   329,   506,   506,   526,
     -67,   527,   400,   570,   533,   421,   182,   545,   325,   256,
     -67,   535,   442,    27,   361,   -67,    24,    24,    24,    24,
     506,   550,   -67,   555,   506,   506,   506,   560,    47,    68,
     -67,   -67,   562,   781,   565,   -67,   363,   -67,   547,   904,
     795,   506,   547,   547,   547,   632,   547,   547,   547,   221,
     -67,   -67,   -67,   -67,   506,   506,   506,   506,   566,   558,
     -67,   576,   580,   199,   916,   -67,   -67,   919,   922,   937,
     -67,   -67,   -67,   502,   -67,   502,   502,   502,   638,    89,
     -67,   923,   647,   655,   662,   569,   670,   677,   685,   938,
     943,   957,   962,   582,   468,   584,   585,   588,   269,   -67,
     -67,   -67,   135,   -67,   824,   587,   -67,   590,   592,   226,
     611,   -67,   618,   619,   353,   547,   -67,   -67,   -67,   -67,
     -67,   -67,   396,   -67,   556,   126,   126,   -67,   468,   -67,
     556,   556,   556,   556,   556,   467,   506,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   601,   606,   612,   627,   255,   692,
     124,   609,   181,   -67,   124,   124,   124,   124,   124,   810,
     824,   547,   547,   547,   547,   547,   438,   -67,   644,   -67,
     -67,   -67,   649,   652,   657,   667,   700,   -67,   -67,   707,
     714,   722,   729,   737,   506,   506,   506,   506,   506,   506,
     506,   -67,   -67,   -67,   -67,   -67,   976,   981,   984,  1000,
    1003,  1007,  1022,   630,   645,   653,   658,   665,   668,   463,
     198,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   688,   -67,   -10,     8,   210,   -47,   -67,   404,
     -67,   297,   -67,   -66,   -67,   485,   -17,   137,   266,    30,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      13,    67,    74,    74,    74,    74,    74,   174,    13,    31,
      32,    69,   224,     6,    30,    30,    30,   122,   123,    19,
    -126,    70,  -126,    71,    72,    54,   225,     5,   246,    68,
      89,   175,    75,    77,    78,    79,    80,  -126,    61,    61,
      61,    61,    73,   226,     7,    55,    56,   139,   261,  -126,
      20,    62,    63,    64,    87,    61,    57,   247,    87,    87,
      87,    90,   140,   141,  -105,  -105,  -105,    88,   176,   139,
     142,  -105,   262,  -105,  -105,  -105,     8,  -105,   177,   144,
     145,   146,    87,   221,   140,   141,  -120,  -120,  -120,   131,
     139,    14,   142,  -120,    16,  -120,  -120,  -120,    81,  -120,
     222,   144,   145,   146,   221,   140,   141,   -92,   -92,   -92,
      33,    15,    97,   142,   -92,   132,   -92,   -92,   -92,    17,
     -92,   222,   144,   145,   146,    69,    82,    54,     1,   -43,
     137,     2,    18,    34,  -126,    70,   139,    71,    72,    98,
     249,   249,   249,   249,   179,   108,    74,    55,    56,    74,
     221,   140,   141,  -110,  -110,  -110,    73,   167,    57,   142,
    -110,   138,  -110,  -110,  -110,   180,  -110,   222,   144,   145,
     146,   120,    99,   109,   110,   181,   235,   100,   101,   239,
      83,    74,   360,    69,    84,    74,    74,    74,   168,    74,
      74,    74,  -126,    70,  -126,    71,    72,   164,   121,   408,
     287,    44,   250,   250,   250,   250,  -126,   102,   238,  -126,
     127,   268,    39,   361,    73,   272,   273,   274,    22,   276,
     277,   278,    69,   165,   288,   409,    45,   332,   128,    52,
     103,   -69,    70,   -69,    71,    72,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   -69,   341,
     342,   333,    26,    73,    53,    27,    69,   242,    74,   296,
      28,   296,   296,   296,   215,  -126,    70,  -126,    71,    72,
     323,   104,    91,    92,    93,   243,   178,  -126,    23,   182,
     319,   355,  -126,   183,    24,   184,   106,    73,   339,   216,
     328,    74,    25,   358,   105,   324,   125,   362,   363,   364,
     365,   366,   185,   200,    74,    74,    74,    74,    74,   107,
      61,    47,   201,   187,   319,   188,    61,    61,    61,    61,
      61,   356,   340,    40,   229,   230,   139,   208,   344,   345,
     346,   347,   348,    48,   369,   370,   371,   372,   373,   184,
     221,   140,   141,   217,   241,   328,   328,   254,   227,   142,
     209,   257,   258,   259,   337,   228,   185,   222,   144,   145,
     146,    42,   139,   186,   266,   338,   218,   187,   271,   188,
      43,   -81,   -81,   -81,   -81,   -81,   221,   140,   141,   367,
     368,   279,   280,   281,   282,   142,    99,   267,   -81,   163,
      41,   100,   101,   222,   144,   145,   146,   139,    46,    49,
     294,   139,   294,   294,   294,    50,   -87,   -87,   -87,   -87,
     -87,   221,   140,   141,    51,   221,   140,   141,    65,   213,
     142,   214,   139,   -87,   142,    94,   233,    66,   222,   144,
     145,   146,   222,   144,   145,   146,   221,   140,   141,    69,
    -126,     9,    95,   139,    10,   142,    96,   237,   -62,    70,
     -62,    71,    72,   222,   144,   145,   146,   221,   140,   141,
     119,   124,   349,   350,   139,   -62,   142,   126,   139,   315,
      73,   129,   245,   130,   222,   144,   145,   146,   221,   140,
     141,   133,   221,   140,   141,   134,   135,   142,   316,   136,
     407,   142,   159,  -126,   166,   222,   144,   145,   146,   222,
     144,   145,   146,   139,   251,   252,   253,   139,    36,    37,
      38,   386,   387,   388,   389,   390,   391,   392,   140,   141,
     160,   161,   140,   141,   162,   169,   142,  -126,   170,   171,
     142,   297,   298,   299,   143,   144,   145,   146,   143,   144,
     145,   146,    54,   172,   173,   206,  -126,   207,    69,   211,
     210,  -126,  -126,   232,  -126,  -126,   231,    54,    70,   236,
      71,    72,    55,    56,   240,   244,  -126,  -126,  -126,  -126,
    -126,    69,    54,    57,  -126,   255,  -126,    55,    56,    73,
     256,    70,  -126,    71,    72,   260,   263,    69,    57,   265,
     284,   283,    55,    56,    69,   305,   234,    70,  -126,    71,
      72,   285,    73,    57,    70,   286,    71,    72,   314,    69,
     320,   321,   329,   111,   322,   330,    69,   331,    73,    70,
     114,    71,    72,   334,   117,    73,    70,   351,    71,    72,
     335,   336,   352,    69,    70,   115,    71,    72,   353,    69,
      73,   359,   116,    70,   275,    71,    72,    73,    69,    70,
     118,    71,    72,   354,   374,    73,    69,   401,    70,   375,
      71,    72,   376,    69,    73,   300,    70,   377,    71,    72,
      73,    69,   402,    70,   302,    71,    72,   378,    69,    73,
     403,    70,   303,    71,    72,   404,    69,    73,    70,   304,
      71,    72,   405,    69,    73,   406,    70,   306,    71,    72,
      21,   379,    73,    70,   307,    71,    72,     0,    69,    73,
     380,   -60,   308,   -60,   -60,    69,     0,    73,    70,   357,
      71,    72,   343,    69,    73,    70,     0,    71,    72,     0,
      69,     0,   -60,    70,   381,    71,    72,     0,    69,    73,
      70,   382,    71,    72,     0,     0,    73,     0,    70,   383,
      71,    72,     0,   184,    73,     0,   384,     0,     0,     0,
       0,    73,     0,     0,   385,     0,     0,   184,     0,    73,
     185,  -117,  -117,     0,     0,   184,     0,   212,     0,  -117,
    -117,   187,   184,   188,   185,  -116,  -116,     0,     0,     0,
       0,  -116,   185,  -116,  -116,   187,   184,   188,     0,   185,
     -89,   -89,   189,   187,     0,   188,   -89,     0,   -89,   264,
     187,   325,   188,   185,   -88,   -88,     0,     0,     0,     0,
     -88,     0,   -88,   -88,   187,   325,   188,     0,   185,   184,
     326,     0,     0,     0,   184,   -89,     0,   192,   264,   187,
       0,   188,   185,     0,   326,     0,   185,   190,     0,  -126,
       0,   185,   184,   187,   185,   188,     0,   187,   191,   188,
     195,   193,   187,     0,   188,   187,     0,   188,   184,   185,
       0,     0,     0,     0,     0,     0,   194,   185,   198,     0,
     187,     0,   188,   202,   196,   185,   204,     0,   187,     0,
     188,     0,   197,     0,     0,   185,   187,     0,   188,     0,
     185,   219,   199,   185,   205,   269,   187,     0,   188,     0,
     203,   187,     0,   188,   187,     0,   188,   184,   185,     0,
     184,     0,   185,   184,   184,   220,     0,     0,     0,   187,
       0,   188,   270,   187,   185,   188,     0,   185,   292,   184,
     185,   185,   301,   289,   184,   187,   290,   188,   187,   291,
     188,   187,   187,   188,   188,   185,   185,   309,   184,     0,
       0,   185,   310,   312,   293,     0,   187,   187,   188,   188,
       0,     0,   187,     0,   188,   185,   311,   184,     0,     0,
     185,   313,   184,     0,     0,   184,   187,     0,   188,     0,
       0,   187,     0,   188,   185,   393,     0,     0,     0,   185,
     394,   184,   185,   395,   184,   187,     0,   188,   184,     0,
     187,     0,   188,   187,     0,   188,     0,     0,   185,   396,
       0,   185,   397,   399,     0,   185,   398,     0,     0,   187,
       0,   188,   187,     0,   188,     0,   187,     0,   188,     0,
     185,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,     0,   188
};

static const yytype_int16 yycheck[] =
{
       4,     1,    49,    50,    51,    52,    53,     1,    12,    19,
      20,     1,     1,     1,    18,    19,    20,    83,    84,     1,
      10,    11,    12,    13,    14,     1,    15,    32,     1,    29,
       1,    25,    49,    50,    51,    52,    53,    27,    42,    43,
      44,    45,    32,    32,    32,    21,    22,     1,     1,    25,
      32,    43,    44,    45,    58,    59,    32,    30,    62,    63,
      64,    32,    16,    17,    18,    19,    20,    59,    22,     1,
      24,    25,    25,    27,    28,    29,     0,    31,    32,    33,
      34,    35,    86,    15,    16,    17,    18,    19,    20,     1,
       1,    26,    24,    25,     1,    27,    28,    29,     1,    31,
      32,    33,    34,    35,    15,    16,    17,    18,    19,    20,
       1,    26,     1,    24,    25,    27,    27,    28,    29,    26,
      31,    32,    33,    34,    35,     1,    29,     1,     1,    32,
       1,     4,    32,    24,    10,    11,     1,    13,    14,    28,
     206,   207,   208,   209,     1,     1,   193,    21,    22,   196,
      15,    16,    17,    18,    19,    20,    32,     1,    32,    24,
      25,    32,    27,    28,    29,    22,    31,    32,    33,    34,
      35,     1,    24,    29,    30,    32,   193,    29,    30,   196,
       1,   228,     1,     1,     5,   232,   233,   234,    32,   236,
     237,   238,    10,    11,    12,    13,    14,     1,    28,     1,
       1,     1,   206,   207,   208,   209,    27,     1,    26,    27,
       1,   228,    32,    32,    32,   232,   233,   234,     3,   236,
     237,   238,     1,    27,    25,    27,    26,     1,    19,     1,
      24,    10,    11,    12,    13,    14,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    27,   315,
     316,    25,     1,    32,    26,     4,     1,     1,   305,   263,
       9,   265,   266,   267,     1,    10,    11,    12,    13,    14,
       1,     1,    62,    63,    64,    19,   139,    26,     3,   142,
     284,    26,    27,   146,     3,     1,     1,    32,   305,    26,
     294,   338,     3,   340,    24,    26,    86,   344,   345,   346,
     347,   348,    18,    19,   351,   352,   353,   354,   355,    24,
     314,     1,    28,    29,   318,    31,   320,   321,   322,   323,
     324,   338,   314,     1,   187,   188,     1,     1,   320,   321,
     322,   323,   324,    23,   351,   352,   353,   354,   355,     1,
      15,    16,    17,     1,    19,   349,   350,   210,    19,    24,
      24,   214,   215,   216,     1,    26,    18,    32,    33,    34,
      35,    26,     1,    25,     1,    12,    24,    29,   231,    31,
      26,    10,    11,    12,    13,    14,    15,    16,    17,   349,
     350,   244,   245,   246,   247,    24,    24,    24,    27,    27,
      32,    29,    30,    32,    33,    34,    35,     1,    23,    26,
     263,     1,   265,   266,   267,    26,    10,    11,    12,    13,
      14,    15,    16,    17,    26,    15,    16,    17,    29,    24,
      24,    26,     1,    27,    24,    28,    26,    29,    32,    33,
      34,    35,    32,    33,    34,    35,    15,    16,    17,     1,
       0,     1,    28,     1,     4,    24,    28,    26,    10,    11,
      12,    13,    14,    32,    33,    34,    35,    15,    16,    17,
      28,    27,   325,   326,     1,    27,    24,    19,     1,     1,
      32,    27,    30,    27,    32,    33,    34,    35,    15,    16,
      17,    32,    15,    16,    17,    32,    32,    24,    20,    32,
      27,    24,    27,    25,    32,    32,    33,    34,    35,    32,
      33,    34,    35,     1,   207,   208,   209,     1,    23,    24,
      25,   374,   375,   376,   377,   378,   379,   380,    16,    17,
      27,    27,    16,    17,    27,    25,    24,    25,    25,    25,
      24,   265,   266,   267,    32,    33,    34,    35,    32,    33,
      34,    35,     1,    25,    25,    24,     5,    24,     1,    24,
      26,    10,    11,    26,    13,    14,    30,     1,    11,    26,
      13,    14,    21,    22,    19,    30,    10,    11,    27,    13,
      14,     1,     1,    32,    27,    25,     5,    21,    22,    32,
      25,    11,    12,    13,    14,    25,    24,     1,    32,    24,
      32,    25,    21,    22,     1,    26,    26,    11,    27,    13,
      14,    25,    32,    32,    11,    25,    13,    14,    26,     1,
      26,    26,    25,    27,    26,    25,     1,    25,    32,    11,
      27,    13,    14,    12,     1,    32,    11,    26,    13,    14,
      12,    12,    26,     1,    11,    27,    13,    14,    26,     1,
      32,    32,    27,    11,    12,    13,    14,    32,     1,    11,
      27,    13,    14,    26,    10,    32,     1,    27,    11,    10,
      13,    14,    10,     1,    32,    27,    11,    10,    13,    14,
      32,     1,    27,    11,    27,    13,    14,    10,     1,    32,
      27,    11,    27,    13,    14,    27,     1,    32,    11,    27,
      13,    14,    27,     1,    32,    27,    11,    27,    13,    14,
      12,     1,    32,    11,    27,    13,    14,    -1,     1,    32,
      10,    11,    27,    13,    14,     1,    -1,    32,    11,    27,
      13,    14,   318,     1,    32,    11,    -1,    13,    14,    -1,
       1,    -1,    32,    11,    27,    13,    14,    -1,     1,    32,
      11,    27,    13,    14,    -1,    -1,    32,    -1,    11,    27,
      13,    14,    -1,     1,    32,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    27,    -1,    -1,     1,    -1,    32,
      18,    19,    20,    -1,    -1,     1,    -1,    25,    -1,    27,
      28,    29,     1,    31,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    18,    27,    28,    29,     1,    31,    -1,    18,
      19,    20,    28,    29,    -1,    31,    25,    -1,    27,    28,
      29,     1,    31,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,     1,    31,    -1,    18,     1,
      20,    -1,    -1,    -1,     1,    25,    -1,     1,    28,    29,
      -1,    31,    18,    -1,    20,    -1,    18,    19,    -1,    25,
      -1,    18,     1,    29,    18,    31,    -1,    29,    25,    31,
       1,    25,    29,    -1,    31,    29,    -1,    31,     1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    18,     1,    -1,
      29,    -1,    31,     1,    25,    18,     1,    -1,    29,    -1,
      31,    -1,    25,    -1,    -1,    18,    29,    -1,    31,    -1,
      18,     1,    25,    18,    19,     1,    29,    -1,    31,    -1,
      28,    29,    -1,    31,    29,    -1,    31,     1,    18,    -1,
       1,    -1,    18,     1,     1,    25,    -1,    -1,    -1,    29,
      -1,    31,    28,    29,    18,    31,    -1,    18,     1,     1,
      18,    18,    19,    27,     1,    29,    27,    31,    29,    27,
      31,    29,    29,    31,    31,    18,    18,    19,     1,    -1,
      -1,    18,    19,     1,    27,    -1,    29,    29,    31,    31,
      -1,    -1,    29,    -1,    31,    18,    19,     1,    -1,    -1,
      18,    19,     1,    -1,    -1,     1,    29,    -1,    31,    -1,
      -1,    29,    -1,    31,    18,    19,    -1,    -1,    -1,    18,
      19,     1,    18,    19,     1,    29,    -1,    31,     1,    -1,
      29,    -1,    31,    29,    -1,    31,    -1,    -1,    18,    19,
      -1,    18,    19,     1,    -1,    18,    19,    -1,    -1,    29,
      -1,    31,    29,    -1,    31,    -1,    29,    -1,    31,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    37,    50,    32,     1,    32,     0,     1,
       4,    38,    39,    56,    26,    26,     1,    26,    32,     1,
      32,    38,     3,     3,     3,     3,     1,     4,     9,    40,
      56,    40,    40,     1,    24,    51,    51,    51,    51,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    32,    41,    44,
      49,    56,    41,    41,    41,    29,    29,     1,    29,     1,
      11,    13,    14,    32,    43,    52,    56,    52,    52,    52,
      52,     1,    29,     1,     5,    42,    48,    56,    41,     1,
      32,    42,    42,    42,    28,    28,    28,     1,    28,    24,
      29,    30,     1,    24,     1,    24,     1,    24,     1,    29,
      30,    27,    43,    52,    27,    27,    27,     1,    27,    28,
       1,    28,    49,    49,    27,    42,    19,     1,    19,    27,
      27,     1,    27,    32,    32,    32,    32,     1,    32,     1,
      16,    17,    24,    32,    33,    34,    35,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    27,
      27,    27,    27,    27,     1,    27,    32,     1,    32,    25,
      25,    25,    25,    25,     1,    25,    22,    32,    53,     1,
      22,    32,    53,    53,     1,    18,    25,    29,    31,    28,
      19,    25,     1,    25,    25,     1,    25,    25,     1,    25,
      19,    28,     1,    28,     1,    19,    24,    24,     1,    24,
      26,    24,    25,    24,    26,     1,    26,     1,    24,     1,
      25,    15,    32,    53,     1,    15,    32,    19,    26,    53,
      53,    30,    26,    26,    26,    52,    26,    26,    26,    52,
      19,    19,     1,    19,    30,    30,     1,    30,    47,    49,
      56,    47,    47,    47,    53,    25,    25,    53,    53,    53,
      25,     1,    25,    24,    28,    24,     1,    24,    52,     1,
      28,    53,    52,    52,    52,    12,    52,    52,    52,    53,
      53,    53,    53,    25,    32,    25,    25,     1,    25,    27,
      27,    27,     1,    27,    53,    54,    56,    54,    54,    54,
      27,    19,    27,    27,    27,    26,    27,    27,    27,    19,
      19,    19,     1,    19,    26,     1,    20,    45,    46,    56,
      26,    26,    26,     1,    26,     1,    20,    55,    56,    25,
      25,    25,     1,    25,    12,    12,    12,     1,    12,    52,
      41,    49,    49,    45,    41,    41,    41,    41,    41,    53,
      53,    26,    26,    26,    26,    26,    52,    27,    43,    32,
       1,    32,    43,    43,    43,    43,    43,    55,    55,    52,
      52,    52,    52,    52,    10,    10,    10,    10,    10,     1,
      10,    27,    27,    27,    27,    27,    53,    53,    53,    53,
      53,    53,    53,    19,    19,    19,    19,    19,    19,     1,
      19,    27,    27,    27,    27,    27,    27,    27,     1,    27
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
        case 6:

/* Line 1455 of yacc.c  */
#line 73 "exemple.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 75 "exemple.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "exemple.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 80 "exemple.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 81 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 94 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 95 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 101 "exemple.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 102 "exemple.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 108 "exemple.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 109 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 110 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 111 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 112 "exemple.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 113 "exemple.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 114 "exemple.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 115 "exemple.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 121 "exemple.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 122 "exemple.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 126 "exemple.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 130 "exemple.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 131 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 132 "exemple.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 133 "exemple.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 134 "exemple.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 135 "exemple.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 139 "exemple.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 140 "exemple.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 141 "exemple.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 142 "exemple.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 143 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 144 "exemple.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 153 "exemple.y"
    {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 154 "exemple.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 155 "exemple.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 156 "exemple.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 160 "exemple.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 161 "exemple.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 162 "exemple.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 165 "exemple.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 166 "exemple.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 167 "exemple.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 168 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 171 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 172 "exemple.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 173 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 176 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 177 "exemple.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 178 "exemple.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 179 "exemple.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 180 "exemple.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 184 "exemple.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 187 "exemple.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 188 "exemple.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 191 "exemple.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 192 "exemple.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 195 "exemple.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 196 "exemple.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 197 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 198 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 205 "exemple.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 208 "exemple.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 209 "exemple.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 210 "exemple.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 211 "exemple.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 214 "exemple.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 215 "exemple.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 216 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 217 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 220 "exemple.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 223 "exemple.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 224 "exemple.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 231 "exemple.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2330 "exemple.tab.c"
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
#line 243 "exemple.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

main()
{
 yyparse();
 
}
