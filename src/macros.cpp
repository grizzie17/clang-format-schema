

// AlignConsecutiveMacros
#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME ( 2 )
#define foo( x )         ( x * x )
#define bar( y, z )      ( y + z )

// StatementMacros
#define clangStatementMacro const int test_ = 5;
clangStatementMacro
int bob = 1;

// AlignEscapedNewlines
#define A     \
    int aaaa; \
    int b;    \
    int dddddddddd;
