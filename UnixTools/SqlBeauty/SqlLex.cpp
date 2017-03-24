/* DO NOT EDIT THIS FILE - it is machine generated */
#line 25 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
#include "stdafx.h"
#include <HashMap.h>
#include "SqlLex.h"
#include "SqlSymbol.h"

static int nameOrKeyWord(const TCHAR *lexeme);


#line 8 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"

// DFA State   0 [nonAccepting]
//   goto  1 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t
//   goto  2 on \n
//   goto  1 on \x0b
//   goto  3 on \r
//   goto  1 on \s
//   goto  4 on !
//   goto 33 on "
//   goto 37 on #
//   goto  5 on &
//   goto 39 on \'
//   goto  6 on (
//   goto  7 on )
//   goto  8 on *
//   goto  9 on +
//   goto 10 on ,
//   goto 11 on -
//   goto 12 on .
//   goto 13 on /
//   goto 14 on 0123456789
//   goto 15 on ;
//   goto 16 on <
//   goto 17 on =
//   goto 18 on >
//   goto 19 on ?
//   goto 20 on ABCDEFGHIJKLMNOPQRSTUVWXYZ
//   goto 41 on [
//   goto 20 on _abcdefghijklmnopqrstuvwxyz\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91
//              \x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa
//              \xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3
//              \xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc
//              \xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5
//              \xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State   1 [accepting, line  75 <;>]
//   goto  1 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
// DFA State   2 [accepting, line  76 <;>]
//   goto  2 on \n
// DFA State   3 [accepting, line  77 <;>]
//   goto  3 on \r
// DFA State   4 [accepting, line  68 <return EXCLAMATION;>]
// DFA State   5 [accepting, line  66 <return CONCAT;>]
// DFA State   6 [accepting, line  71 <return LPAR;>]
// DFA State   7 [accepting, line  72 <return RPAR;>]
// DFA State   8 [accepting, line  63 <return STAR;>]
//   goto 24 on *
// DFA State   9 [accepting, line  62 <return PLUS;>]
// DFA State  10 [accepting, line  69 <return COMMA;>]
// DFA State  11 [accepting, line  61 <return MINUS;>]
// DFA State  12 [accepting, line  67 <return DOT;>]
//   goto 34 on 0123456789
// DFA State  13 [accepting, line  64 <return DIVOP;>]
// DFA State  14 [accepting, line  43 <return NUMBER;>]
//   goto 34 on .
//   goto 14 on 0123456789
//   goto 20 on ABCD
//   goto 35 on E
//   goto 20 on FGHIJKLMNOPQRSTUVWXYZ_abcd
//   goto 35 on e
//   goto 20 on fghijklmnopqrstuvwxyz\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93
//              \x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac
//              \xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5
//              \xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde
//              \xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7
//              \xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State  15 [accepting, line  70 <return SEMI;>]
// DFA State  16 [accepting, line  55 <return RELOPLT;>]
//   goto 25 on =
//   goto 26 on >
// DFA State  17 [accepting, line  60 <return EQUAL;>]
// DFA State  18 [accepting, line  58 <return RELOPGT;>]
//   goto 27 on =
// DFA State  19 [accepting, line  73 <return PARAM;>]
// DFA State  20 [accepting, line  47 <return nameOrKeyWord((TCHAR*)getText());>]
//   goto 20 on 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz\x80\x81\x82\x83\x84\x85\x86\x87\x88
//              \x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1
//              \xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba
//              \xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3
//              \xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec
//              \xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State  21 [accepting, line  52 <error(getPos(),_T("Adding missing \" to string con>]
// DFA State  22 [accepting, line  49 <return STRING;>]
//   goto 28 on "
// DFA State  23 [accepting, line  50 <return STRING;>]
// DFA State  24 [accepting, line  65 <return EXPO;>]
// DFA State  25 [accepting, line  56 <return RELOPLE;>]
// DFA State  26 [accepting, line  57 <return NOTEQ;>]
// DFA State  27 [accepting, line  59 <return RELOPGE;>]
// DFA State  28 [accepting, line  51 <return STRING;>]
//   goto 42 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t
//   goto 21 on \n
//   goto 42 on \x0b\f
//   goto 43 on \r
//   goto 42 on \x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\s!
//   goto 22 on "
//   goto 42 on #$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f\x80
//              \x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99
//              \x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2
//              \xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb
//              \xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4
//              \xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd
//              \xfe\xff
// DFA State  29 [accepting, line  48 <return NAME;>]
// DFA State  30 [accepting, line  45 <return TIMECONST;>]
// DFA State  31 [accepting, line  44 <return DATECONST;>]
// DFA State  32 [accepting, line  46 <return TIMESTAMPCONST;>]
// DFA State  33 [nonAccepting]
//   goto 42 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t
//   goto 21 on \n
//   goto 42 on \x0b\f
//   goto 43 on \r
//   goto 42 on \x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\s!
//   goto 22 on "
//   goto 42 on #$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f\x80
//              \x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99
//              \x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2
//              \xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb
//              \xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4
//              \xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd
//              \xfe\xff
// DFA State  34 [accepting, line  43 <return NUMBER;>]
//   goto 34 on 0123456789
//   goto 49 on Ee
// DFA State  35 [accepting, line  47 <return nameOrKeyWord((TCHAR*)getText());>]
//   goto 50 on +-
//   goto 38 on 0123456789
//   goto 20 on ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b
//              \x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4
//              \xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd
//              \xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6
//              \xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef
//              \xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State  36 [accepting, line  49 <return STRING;>]
//   goto 42 on "
// DFA State  37 [nonAccepting]
//   goto 37 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 44 on 0123456789
// DFA State  38 [accepting, line  43 <return NUMBER;>]
//   goto 38 on 0123456789
//   goto 20 on ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b
//              \x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4
//              \xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd
//              \xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6
//              \xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef
//              \xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State  39 [nonAccepting]
//   goto 39 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\f\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c
//              \x1d\x1e\x1f\s!"#$%&
//   goto 23 on \'
//   goto 39 on ()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[
//   goto 45 on \\
//   goto 39 on ]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f
//              \x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8
//              \xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1
//              \xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda
//              \xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3
//              \xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State  40 [accepting, line  43 <return NUMBER;>]
//   goto 40 on 0123456789
// DFA State  41 [nonAccepting]
//   goto 46 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\f\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c
//              \x1d\x1e\x1f\s!"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\^_`abcdefghijklmnopqrstuvw
//              xyz{|}~\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95
//              \x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae
//              \xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7
//              \xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0
//              \xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9
//              \xfa\xfb\xfc\xfd\xfe\xff
// DFA State  42 [nonAccepting]
//   goto 42 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t
//   goto 21 on \n
//   goto 42 on \x0b\f
//   goto 43 on \r
//   goto 42 on \x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\s!
//   goto 36 on "
//   goto 42 on #$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f\x80
//              \x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99
//              \x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2
//              \xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb
//              \xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4
//              \xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd
//              \xfe\xff
// DFA State  43 [nonAccepting]
//   goto 21 on \n
// DFA State  44 [nonAccepting]
//   goto 47 on -./
//   goto 48 on 0123456789
//   goto 72 on :
// DFA State  45 [nonAccepting]
//   goto 39 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\f\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c
//              \x1d\x1e\x1f\s!"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuv
//              wxyz{|}~\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95
//              \x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae
//              \xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7
//              \xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0
//              \xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9
//              \xfa\xfb\xfc\xfd\xfe\xff
// DFA State  46 [nonAccepting]
//   goto 46 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\f\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c
//              \x1d\x1e\x1f\s!"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\
//   goto 29 on ]
//   goto 46 on ^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f
//              \x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8
//              \xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1
//              \xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda
//              \xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3
//              \xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff
// DFA State  47 [nonAccepting]
//   goto 51 on 0123456789
// DFA State  48 [nonAccepting]
//   goto 47 on -./
//   goto 72 on :
// DFA State  49 [nonAccepting]
//   goto 50 on +-
//   goto 40 on 0123456789
// DFA State  50 [nonAccepting]
//   goto 40 on 0123456789
// DFA State  51 [nonAccepting]
//   goto 53 on -./
//   goto 54 on 0123456789
// DFA State  52 [nonAccepting]
//   goto 55 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 30 on #
//   goto 56 on 0123456789
//   goto 73 on :
//   goto 57 on APap
// DFA State  53 [nonAccepting]
//   goto 58 on 0123456789
// DFA State  54 [nonAccepting]
//   goto 53 on -./
// DFA State  55 [nonAccepting]
//   goto 55 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 30 on #
//   goto 57 on APap
// DFA State  56 [nonAccepting]
//   goto 55 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 30 on #
//   goto 73 on :
//   goto 57 on APap
// DFA State  57 [nonAccepting]
//   goto 60 on Mm
// DFA State  58 [nonAccepting]
//   goto 74 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 31 on #
//   goto 76 on 0123456789
// DFA State  59 [nonAccepting]
//   goto 55 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 30 on #
//   goto 55 on 0123456789
//   goto 57 on APap
// DFA State  60 [nonAccepting]
//   goto 60 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 30 on #
// DFA State  61 [nonAccepting]
//   goto 62 on 0123456789
//   goto 63 on :
// DFA State  62 [nonAccepting]
//   goto 63 on :
// DFA State  63 [nonAccepting]
//   goto 65 on 0123456789
// DFA State  64 [nonAccepting]
//   goto 74 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 31 on #
// DFA State  65 [nonAccepting]
//   goto 66 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 32 on #
//   goto 67 on 0123456789
//   goto 68 on :
//   goto 69 on APap
// DFA State  66 [nonAccepting]
//   goto 66 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 32 on #
//   goto 69 on APap
// DFA State  67 [nonAccepting]
//   goto 66 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 32 on #
//   goto 68 on :
//   goto 69 on APap
// DFA State  68 [nonAccepting]
//   goto 70 on 0123456789
// DFA State  69 [nonAccepting]
//   goto 71 on Mm
// DFA State  70 [nonAccepting]
//   goto 66 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 32 on #
//   goto 66 on 0123456789
//   goto 69 on APap
// DFA State  71 [nonAccepting]
//   goto 71 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 32 on #
// DFA State  72 [nonAccepting]
//   goto 52 on 0123456789
// DFA State  73 [nonAccepting]
//   goto 59 on 0123456789
// DFA State  74 [nonAccepting]
//   goto 74 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 31 on #
//   goto 61 on 0123456789
// DFA State  75 [nonAccepting]
//   goto 74 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 31 on #
//   goto 64 on 0123456789
// DFA State  76 [nonAccepting]
//   goto 74 on \x00\x01\x02\x03\x04\x05\x06\x07\b\t\x0b\s
//   goto 31 on #
//   goto 75 on 0123456789

// The lexCharMap[] and lexStateMap arrays are used as follows:
// 
// nextState = lexNext[lexStateMap[currentState]][lexCharMap[inputChar]];
//
// Character positions in the lexCharMap Array are:
//
//  \x00 \x01 \x02 \x03 \x04 \x05 \x06 \x07 \b   \t   \n   \x0b \f   \r   \x0e \x0f 
//  \x10 \x11 \x12 \x13 \x14 \x15 \x16 \x17 \x18 \x19 \x1a \x1b \x1c \x1d \x1e \x1f 
//  \s   !    "    #    $    %    &    \'   (    )    *    +    ,    -    .    /    
//  0    1    2    3    4    5    6    7    8    9    :    ;    <    =    >    ?    
//  @    A    B    C    D    E    F    G    H    I    J    K    L    M    N    O    
//  P    Q    R    S    T    U    V    W    X    Y    Z    [    \\   ]    ^    _    
//  `    a    b    c    d    e    f    g    h    i    j    k    l    m    n    o    
//  p    q    r    s    t    u    v    w    x    y    z    {    |    }    ~    \x7f 
//  \x80 \x81 \x82 \x83 \x84 \x85 \x86 \x87 \x88 \x89 \x8a \x8b \x8c \x8d \x8e \x8f 
//  \x90 \x91 \x92 \x93 \x94 \x95 \x96 \x97 \x98 \x99 \x9a \x9b \x9c \x9d \x9e \x9f 
//  \xa0 \xa1 \xa2 \xa3 \xa4 \xa5 \xa6 \xa7 \xa8 \xa9 \xaa \xab \xac \xad \xae \xaf 
//  \xb0 \xb1 \xb2 \xb3 \xb4 \xb5 \xb6 \xb7 \xb8 \xb9 \xba \xbb \xbc \xbd \xbe \xbf 
//  \xc0 \xc1 \xc2 \xc3 \xc4 \xc5 \xc6 \xc7 \xc8 \xc9 \xca \xcb \xcc \xcd \xce \xcf 
//  \xd0 \xd1 \xd2 \xd3 \xd4 \xd5 \xd6 \xd7 \xd8 \xd9 \xda \xdb \xdc \xdd \xde \xdf 
//  \xe0 \xe1 \xe2 \xe3 \xe4 \xe5 \xe6 \xe7 \xe8 \xe9 \xea \xeb \xec \xed \xee \xef 
//  \xf0 \xf1 \xf2 \xf3 \xf4 \xf5 \xf6 \xf7 \xf8 \xf9 \xfa \xfb \xfc \xfd \xfe \xff 
//  

static unsigned char lexCharMap[256] = {
       0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   2,   3,   2,   2,
       2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
       0,   4,   5,   6,   2,   2,   7,   8,   9,  10,  11,  12,  13,  14,  15,  16,
      17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  18,  19,  20,  21,  22,  23,
       2,  24,  25,  25,  25,  26,  25,  25,  25,  25,  25,  25,  25,  27,  25,  25,
      24,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  28,  29,  30,   2,  25,
       2,  24,  25,  25,  25,  26,  25,  25,  25,  25,  25,  25,  25,  27,  25,  25,
      24,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,   2,   2,   2,   2,   2,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
      25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25
};

static const unsigned char lexStateMap[77] = {
    /*   0 */   0,   1,   2,   3,   4,   4,   4,   4,   5,   4,
    /*  10 */   4,   4,   6,   4,   7,   4,   8,   4,   9,   4,
    /*  20 */  10,   4,  11,   4,   4,   4,   4,   4,  12,   4,
    /*  30 */   4,   4,   4,  12,  13,  14,  15,  16,  17,  18,
    /*  40 */  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
    /*  50 */  19,  29,  30,  31,  32,  33,  34,  35,  36,  37,
    /*  60 */  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
    /*  70 */  48,  49,  50,  51,  52,  53,  54
};

static const char lexNext[55][31] = {
    /*   0 */ { 1, 2,-1, 3, 4,33,37, 5,39, 6, 7, 8, 9,10,11,12,13,14,-1,15,16,17,18,19,20,20,20,20,41,-1,-1},
    /*   1 */ { 1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   2 */ {-1, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   3 */ {-1,-1,-1, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   4 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   5 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,24,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   6 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,34,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   7 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,34,-1,14,-1,-1,-1,-1,-1,-1,20,20,35,20,-1,-1,-1},
    /*   8 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,25,26,-1,-1,-1,-1,-1,-1,-1,-1},
    /*   9 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,27,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  10 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,20,-1,-1,-1,-1,-1,-1,20,20,20,20,-1,-1,-1},
    /*  11 */ {-1,-1,-1,-1,-1,28,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  12 */ {42,21,42,43,42,22,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42},
    /*  13 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,34,-1,-1,-1,-1,-1,-1,-1,-1,49,-1,-1,-1,-1},
    /*  14 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,50,-1,50,-1,-1,38,-1,-1,-1,-1,-1,-1,20,20,20,20,-1,-1,-1},
    /*  15 */ {-1,-1,-1,-1,-1,42,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  16 */ {37,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,44,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  17 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,38,-1,-1,-1,-1,-1,-1,20,20,20,20,-1,-1,-1},
    /*  18 */ {39,-1,39,-1,39,39,39,39,23,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,45,39},
    /*  19 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,40,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  20 */ {46,-1,46,-1,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,-1},
    /*  21 */ {42,21,42,43,42,36,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42},
    /*  22 */ {-1,21,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  23 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,47,47,47,48,72,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  24 */ {39,-1,39,-1,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39},
    /*  25 */ {46,-1,46,-1,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,29},
    /*  26 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,51,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  27 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,47,47,47,-1,72,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  28 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,50,-1,50,-1,-1,40,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  29 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,53,53,53,54,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  30 */ {55,-1,-1,-1,-1,-1,30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,56,73,-1,-1,-1,-1,-1,57,-1,-1,-1,-1,-1,-1},
    /*  31 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,58,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  32 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,53,53,53,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  33 */ {55,-1,-1,-1,-1,-1,30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,57,-1,-1,-1,-1,-1,-1},
    /*  34 */ {55,-1,-1,-1,-1,-1,30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,73,-1,-1,-1,-1,-1,57,-1,-1,-1,-1,-1,-1},
    /*  35 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,60,-1,-1,-1},
    /*  36 */ {74,-1,-1,-1,-1,-1,31,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,76,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  37 */ {55,-1,-1,-1,-1,-1,30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,55,-1,-1,-1,-1,-1,-1,57,-1,-1,-1,-1,-1,-1},
    /*  38 */ {60,-1,-1,-1,-1,-1,30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  39 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,62,63,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  40 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,63,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  41 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,65,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  42 */ {74,-1,-1,-1,-1,-1,31,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  43 */ {66,-1,-1,-1,-1,-1,32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,67,68,-1,-1,-1,-1,-1,69,-1,-1,-1,-1,-1,-1},
    /*  44 */ {66,-1,-1,-1,-1,-1,32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,69,-1,-1,-1,-1,-1,-1},
    /*  45 */ {66,-1,-1,-1,-1,-1,32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,68,-1,-1,-1,-1,-1,69,-1,-1,-1,-1,-1,-1},
    /*  46 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,70,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  47 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,71,-1,-1,-1},
    /*  48 */ {66,-1,-1,-1,-1,-1,32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,66,-1,-1,-1,-1,-1,-1,69,-1,-1,-1,-1,-1,-1},
    /*  49 */ {71,-1,-1,-1,-1,-1,32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  50 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,52,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  51 */ {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,59,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  52 */ {74,-1,-1,-1,-1,-1,31,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,61,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  53 */ {74,-1,-1,-1,-1,-1,31,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,64,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    /*  54 */ {74,-1,-1,-1,-1,-1,31,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,75,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
};

static const char lexAccept[] = {
    /*   0 */  0,  4,  4,  4,  4,  4,  4,  4,  4,  4,
    /*  10 */  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
    /*  20 */  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
    /*  30 */  4,  4,  4,  0,  4,  4,  4,  0,  4,  0,
    /*  40 */  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    /*  50 */  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    /*  60 */  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    /*  70 */  0,  0,  0,  0,  0,  0,  0 
};

#line 11 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"

// nextState(state,c) is given the current state number and input
// character and evaluates to the next state.
#define nextState(state,c) (lexNext[lexStateMap[state]][lexCharMap[c]])

int SqlLex::getNextLexeme() {
  int  state           = 0;     // Current state
  int  lastAcceptState = 0;     // Most recently seen accept state
  int  prevState;               // State before lastAcceptState
  int  nextState;               // Next state
  unsigned int  lookahead;      // Lookahead character
  int  anchor;                  // Anchor mode for most recently seen accepting state

  unTerminateLexeme();
  initMore();
  markStart();

  for(;;) {
    // Check end of file. If there's an unprocessed accepting state,
    // lastAcceptState will be nonzero. In this case, ignore EOF for now so
    // that you can do the accepting action; otherwise, try to open another
    // file and return if you can't.

    for(;;) {
      if(((int)(lookahead = look(1))) != EOF) {
		assert(lookahead < 256);
        nextState = nextState(state, lookahead);
        break;
      } else if(lastAcceptState != 0) {   // still something to do
        nextState = -1;
        break;
      } else if(isWrap()) {               // another file?
        terminateLexeme();
        return 0;                         // EOI
      }
    }
    if(m_debug) {
      debugState(_T("--------"), state, lookahead);
    }

    if(nextState != -1) {
      if(advance() < 0) {                 // Buffer full
        const TCHAR *tooLongMessage = _T("Lexeme too long. Discarding extra characters.");
        error(getPos(), tooLongMessage);

        flush(true);

        if(m_debug) {
          debug(tooLongMessage);
          debugState(_T("--------"), state, look(1));
        }
      }

      if(anchor = lexAccept[nextState]) { // Is this an accept state
        prevState       = state;
        lastAcceptState = nextState;
        markEnd();                        // Mark input at current character
      }                                   // A subsequent gotoMark() returns us to this position.
      state = nextState;
    } else if(lastAcceptState == 0) {     // illegal input
      error(getPos(), _istprint(lookahead)?_T("Ignore bad input:'%c'"):_T("Ignore bad input:%#x"),lookahead);

      if(m_debug) {
        debug(_T("Ignore bad input:'%c'"), lookahead);
      }

      advance();
    } else {
      if(m_debug) {
        debugState(_T("accept--"), lastAcceptState, lookahead);
      }

      gotoMark();                         // Back up to previous accept state
      if(anchor & ANCHOR_END) {           // If end anchor is active
        pushback(1);                      // Push back the CR or LF
      }
      if(anchor & ANCHOR_START) {         // If start anchor is active
        moveStart();                      // Skip the leading newline
      }
      terminateLexeme();                  // Null-terminate the string

      switch(lastAcceptState) {
      case 1:
#line 75 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        ;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 2:
#line 76 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        ;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 3:
#line 77 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        ;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 4:
#line 68 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return EXCLAMATION;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 5:
#line 66 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return CONCAT;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 6:
#line 71 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return LPAR;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 7:
#line 72 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return RPAR;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 8:
#line 63 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return STAR;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 9:
#line 62 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return PLUS;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 10:
#line 69 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return COMMA;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 11:
#line 61 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return MINUS;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 12:
#line 67 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return DOT;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 13:
#line 64 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return DIVOP;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 14:
      case 34:
      case 38:
      case 40:
#line 43 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return NUMBER;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 15:
#line 70 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return SEMI;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 16:
#line 55 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return RELOPLT;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 17:
#line 60 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return EQUAL;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 18:
#line 58 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return RELOPGT;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 19:
#line 73 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return PARAM;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 20:
      case 35:
#line 47 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return nameOrKeyWord((TCHAR*)getText());
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 21:
#line 52 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        error(getPos(),_T("Adding missing \" to string constant"));
        					    return STRING;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 22:
      case 36:
#line 49 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return STRING;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 23:
#line 50 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return STRING;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 24:
#line 65 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return EXPO;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 25:
#line 56 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return RELOPLE;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 26:
#line 57 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return NOTEQ;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 27:
#line 59 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return RELOPGE;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 28:
#line 51 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return STRING;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 29:
#line 48 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return NAME;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 30:
#line 45 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return TIMECONST;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 31:
#line 44 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return DATECONST;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
      case 32:
#line 46 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"
        return TIMESTAMPCONST;
        
#line 93 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
        break;
                  
      default:
        throwException(_T("SqlLex::getNextLexeme:Unknown accept state:%d, text=<%s>"), lastAcceptState,getText());
        break;
      }

      unTerminateLexeme();
      lastAcceptState = 0;

      if(isMore()) {
        state = prevState;                // Back up
        initMore();
      } else {
        state = 0;
        markStart();
      }
    }
  }
}

#line 80 "C:\\mytools2015\\UnixTools\\sqlbeauty\\Sql.lex"

  /* This part goes to the last part of sqllex.cpp */

typedef struct {
  TCHAR *m_name;
  int    m_token;
} KeyWord;

static KeyWord keyWordTable[] = {
  _T("ALL") 			 ,ALL 				,
  _T("AND") 			 ,AND 				,
  _T("AS")   			 ,AS 				,
  _T("ASC") 			 ,ASCENDING			,
  _T("ASCENDING")		 ,ASCENDING			,
  _T("BETWEEN") 		 ,BETWEEN 			,
  _T("BIT")              ,TYPEBIT           ,
  _T("BY")				 ,BY				,
  _T("CAST")		     ,CAST				,
  _T("COUNT")			 ,COUNT				,
  _T("CURRENTDATE")      ,CURRENTDATE       ,
  _T("CURRENTTIME")      ,CURRENTTIME       ,
  _T("CURRENTTIMESTAMP") ,CURRENTTIMESTAMP  ,
  _T("DATETIME")         ,TYPEDATETIME  	,
  _T("DELETE")			 ,DELETESYM			,
  _T("DESC")			 ,DESCENDING		,
  _T("DESCENDING")		 ,DESCENDING		,
  _T("DISTINCT")		 ,DISTINCT			,
  _T("DISTINCTROW")		 ,DISTINCTROW		,
  _T("DOUBLE")			 ,TYPEDOUBLE		,
  _T("DROP")			 ,DROP				,
  _T("EXISTS")			 ,EXISTS			,
  _T("FALSE")            ,BOOLFALSE         ,
  _T("FROM")			 ,FROM				,
  _T("GROUP")			 ,GROUp				,
  _T("HAVING")			 ,HAVING			,
  _T("IEEEDOUBLE")       ,TYPEDOUBLE        ,
  _T("IIF")              ,IIF               ,
  _T("IN")				 ,INSYM				,
  _T("INDEX")			 ,INDEX				,
  _T("INNER")			 ,INNER				,
  _T("INSERT")			 ,INSERT			,
  _T("INTERSECT")		 ,INTERSECT			,
  _T("INTO")			 ,INTO				,
  _T("IS")				 ,IS				,
  _T("JOIN")			 ,JOIN				,
  _T("LEFT")			 ,LEFT				,
  _T("LIKE")			 ,LIKE				,
  _T("LONG")			 ,TYPELONG			,
  _T("MINUS")			 ,SETDIFFERENCE		, // symbol MINUS is -
  _T("MOD")			     ,MODOP				,
  _T("NOT") 			 ,NOT 				,
  _T("NULL")			 ,NULLVAL 			,
  _T("ON")				 ,ON				,
  _T("OR")				 ,OR				,
  _T("ORDER")			 ,ORDER				,
  _T("OUTER")			 ,OUTER				,
  _T("PARAMETERS")       ,PARAMETERS        ,
  _T("PERCENT")          ,PERCENT           ,
  _T("PIVOT")            ,PIVOT             ,
  _T("RIGHT")            ,RIGHT             ,
  _T("SELECT")			 ,SELECT			,
  _T("SET") 			 ,SET 				,
  _T("TABLE")			 ,TABLE				,
  _T("TEXT")             ,TYPETEXT          ,
  _T("TOP")              ,TOP               ,
  _T("TRANSFORM")        ,TRANSFORM         ,
  _T("TRUE")             ,BOOLTRUE          ,
  _T("UNION")			 ,UNION				,
  _T("UPDATE")			 ,UPDATE			,
  _T("VALUE") 			 ,TYPEVALUE	        ,
  _T("VALUES")			 ,VALUES			,
  _T("WHERE")			 ,WHERE
};

typedef StrHashMap<int> HashMapType;

class KeyWordHashMap : public HashMapType {
public:
  KeyWordHashMap(int tablesize) : HashMapType(tablesize) {
    for(int i = 0; i < ARRAYSIZE(keyWordTable); i++)
      put(keyWordTable[i].m_name, keyWordTable[i].m_token);

//	  printf("maxlength:%d\n",maxlength());
//	  iterator it = getiterator();
//	  for(it.first(); it.current(); it.next()) {
//		printf("%-20s %d\n",it.key(),it.elem());
//	  }
  }
};

static KeyWordHashMap keywords(299);

static int nameOrKeyWord(const TCHAR *lexeme) {
  TCHAR tmp[100];
  int *p = keywords.get(strToUpperCase(_tcscpy(tmp, lexeme)));
  return p ? *p : NAME;
}

SqlLex::SqlLex(LRparser *parser) {
  m_parser = parser;
}

void SqlLex::verror(const SourcePosition &pos, const TCHAR *format, va_list argptr) {
  if(m_parser != NULL) {
    m_parser->verror(pos, format, argptr); // redirect to parser
  } else {
    _vtprintf(format, argptr);
  }
}

void SqlLex::findBestHashMapSize() {
  for(int tableSize = 57; tableSize < 2000; tableSize++) {
    KeyWordHashMap ht(tableSize);
	if(ht.getMaxChainLength() == 1) {
	  _tprintf(_T("Tablesize:%d gives best hashmap\n"), tableSize);
	  exit(0);
	}
  }
}

#line 114 "C:\\mytools2015\\ParserGen\\lib\\lexgencpp.par"
