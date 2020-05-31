
// AlwaysBreakBeforeMultilineStrings
// BreakStringLiterals
char aaa[]
        = "aaaa"
          "bbbb"
          "cccc";


//setup begin
int         aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa = 2;
int         bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb = 0;
int         ccccccccccccccccccccccccccccccccccccccccc = 1;
int         ddddddddddddddddddddddddddddddddddddddddd = 3;
typedef int LooooooooooongType;
extern LooooooooooongType
someLooooooooooooooooongFunction();

//setup end

// AlignOperands
int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
        + ccccccccccccccccccccccccccccccccccccccccc;


LooooooooooongType loooooooooooooooooooooongVariable
        = someLooooooooooooooooongFunction();


bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                        + ddddddddddddddddddddddddddddddddddddddddd
                == aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        && aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                > ccccccccccccccccccccccccccccccccccccccccc;
