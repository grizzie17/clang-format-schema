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

    // BreakBeforeBraces
    if ( a < 0 ) {}
    else
    {}


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


    // BraceWrapping.AfterControlStatement
    // BraceWrapping.BeforeElse
    // BraceWrapping.IndentBraces
    // IndentWidth
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
        foo();
    }
    catch ( int e )
    {}


    // BreakBeforeTernaryOperators
    // ContinuationIndentWidth
    int aaaaaaaaaaaaaaaaaaaaaaaa = -1;
    int bbbbbbbbbbbbbbbbbbbbbbbb = 0;
    int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
            = aaaaaaaaaaaaaaaaaaaaaaaa < bbbbbbbbbbbbbbbbbbbbbbbb
            ? aaaaaaaaaaaaaaaaaaaaaaaa
            : bbbbbbbbbbbbbbbbbbbbbbbb;
}


bool
foo()
{
    return true;
}
