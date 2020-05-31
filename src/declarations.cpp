
// AlignConsecutiveAssignments
// AlignConsecutiveDeclarations
int    intData = 0;
float  floatData = 0.0f;
double doubleData = 0.0;


// AllowShortEnumsOnASingleLine
// BraceWrapping.AfterEnum
enum
{
    A,
    B
} myEnum;

// BraceWrapping.AfterStruct
struct sampleStruct
{};

// BraceWrapping.AfterUnion
union sampleUnion
{
    // AlignConsecutiveDeclarations
    int       intData;
    long      longData;
    long long longlongData;
    float     floatData;
    double    doubleData;
};


// BraceWrapping.AfterExternBlock
extern "C"
{
    extern int bob;
}

// AlwaysBreakTemplateDeclarations
// SpaceAfterTemplateKeyword
// SpacesInAngles
template <typename T>
T
foo()
{}

template <typename T>
T
foo( T aaaaaaaaaaaaaaaaaaaaa, T bbbbbbbbbbbbbbbbbbbbb )
{
    return aaaaaaaaaaaaaaaaaaaaa < bbbbbbbbbbbbbbbbbbbbb
            ? bbbbbbbbbbbbbbbbbbbbb
            : aaaaaaaaaaaaaaaaaaaaa;
}
