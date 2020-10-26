

// AlwaysBreakBeforeMultilineStrings
// BreakStringLiterals
char aaa[]
        = "aaaa"
          "bbbb"
          "cccc";

// MaxEmptyLinesToKeep


// AlignConsecutiveAssignments
// BreakBeforeBinaryOperators
// SpaceBeforeAssignmentOperators
int abc = 123;
int abcdef = 456 + abc;

// BreakBeforeBinaryOperators
// SpacesInParentheses
int def = ( abc + 200 ) * 2;

// SpaceAfterCStyleCast
// SpacesInCStyleCastParentheses
int ghi = (int)2.0f;

// SpacesInAngles
long jkl = static_cast<long>( 2.0f );

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
// BreakBeforeBinaryOperators
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


// BreakBeforeTernaryOperators
// ContinuationIndentWidth
int aaaaaaaaaaaaaaaaaaaaaaaa = -1;
int bbbbbbbbbbbbbbbbbbbbbbbb = 0;
int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        = aaaaaaaaaaaaaaaaaaaaaaaa < bbbbbbbbbbbbbbbbbbbbbbbb
        ? aaaaaaaaaaaaaaaaaaaaaaaa
        : bbbbbbbbbbbbbbbbbbbbbbbb;
