#include <vector>


// AlignConsecutiveAssignments
// AlignConsecutiveDeclarations
// AlignTrailingComments
// SpacesBeforeTrailingComments
int    intData = 0;       // one
float  floatData = 0.0f;  // two
double doubleData = 0.0;  // three

// SpaceBeforeSquareBrackets
// SpacesInSquareBrackets
int arr[3];


// PointerAlignment
int* pint;


// SpaceBeforeCpp11BracedList
int*        p = new int[3] { 1, 2, 3 };
std::vector v = std::vector<int> { 1, 2, 3 };


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
#ifdef __cplusplus
extern "C" {
#endif
extern int bob;
#ifdef __cplusplus
}
#endif

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
