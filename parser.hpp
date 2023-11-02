/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BOOLEAN = 258,                 /* BOOLEAN  */
    CHAR = 259,                    /* CHAR  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    INTPTR = 262,                  /* INTPTR  */
    CHARPTR = 263,                 /* CHARPTR  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    WHILE = 266,                   /* WHILE  */
    VAR = 267,                     /* VAR  */
    PROCEDURE = 268,               /* PROCEDURE  */
    RETURN = 269,                  /* RETURN  */
    NULLTOKEN = 270,               /* NULLTOKEN  */
    AND = 271,                     /* AND  */
    DIV = 272,                     /* DIV  */
    EQUAL = 273,                   /* EQUAL  */
    EQUALS = 274,                  /* EQUALS  */
    GT = 275,                      /* GT  */
    GTE = 276,                     /* GTE  */
    LT = 277,                      /* LT  */
    LTE = 278,                     /* LTE  */
    MINUS = 279,                   /* MINUS  */
    NOT = 280,                     /* NOT  */
    NOTEQUAL = 281,                /* NOTEQUAL  */
    OR = 282,                      /* OR  */
    PLUS = 283,                    /* PLUS  */
    MUL = 284,                     /* MUL  */
    AMP = 285,                     /* AMP  */
    DEREFERENCE = 286,             /* DEREFERENCE  */
    TRUE = 287,                    /* TRUE  */
    FALSE = 288,                   /* FALSE  */
    INT_LITERAL = 289,             /* INT_LITERAL  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    COMMA = 291,                   /* COMMA  */
    COLON = 292,                   /* COLON  */
    UMINUS = 293,                  /* UMINUS  */
    LBRACE = 294,                  /* LBRACE  */
    RBRACE = 295,                  /* RBRACE  */
    SEMICOLON = 296,               /* SEMICOLON  */
    LPAREN = 297,                  /* LPAREN  */
    RPAREN = 298,                  /* RPAREN  */
    BAR = 299,                     /* BAR  */
    LBRACKET = 300,                /* LBRACKET  */
    RBRACKET = 301,                /* RBRACKET  */
    STRING_LITERAL = 302,          /* STRING_LITERAL  */
    CHAR_LITERAL = 303             /* CHAR_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
