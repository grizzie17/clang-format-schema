#include <vector>
int a = 0;


// BraceWrapping.AfterFunction
// IndentWidth
int
main()
{
    // AllowShortIfStatementsOnASingleLine
    // SpaceBeforeParens
    // SpacesInConditionalStatement
    if ( a < 0 )
        return;

    // AllowShortIfStatementsOnASingleLine
    // BraceWrapping.AfterControlStatement
    // BreakBeforeBraces
    if ( a < 0 ) {}
    else
    {}

    // SpaceAfterLogicalNot
    if ( ! foo() )
        a = 1;


    // AllowShortLoopsOnASingleLine
    // SpaceBeforeParens
    // SpacesInConditionalStatement
    while ( true )
        continue;

    while ( true )
        ;

    // AllowShortBlocksOnASingleLine
    while ( true ) {}


    do
    {
        ++a;
    } while ( a < 0 );


    for ( int j = 0; j < 5; ++j )
        ++a;


    std::vector<int> vv = { 1, 2, 3, 4, 5 };
    // SpaceBeforeRangeBasedForLoopColon
    // SpacesInConditionalStatement
    for ( auto item : vv )
        a += item;


    // BraceWrapping.AfterControlStatement
    // BraceWrapping.BeforeElse
    // BraceWrapping.IndentBraces
    // IndentWidth
    // SpacesInConditionalStatement
    if ( a < 0 )
    {
        a = 1;
    }
    else
    {
        a = 0;
    }

    // SpacesInConditionalStatement
    switch ( a )
    {
    // IndentCaseLabels
    case 0:
        break;  // AllowShortCaseLabelsOnASingleLine
    case 1:
        {  // IndentCaseBlocks
            a = 0;
        }
        break;
    default:
        {
            a = 1;  // BraceWrapping.AfterCaseLabel
        }
    }

    // BreakBeforeBraces
    try
    {
        foo();  // SpaceInEmptyParentheses
    }
    catch ( int e )
    {}
}


bool
foo()  // SpaceInEmptyParentheses
{
    return true;
}
