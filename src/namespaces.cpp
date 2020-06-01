#include <vector>


// BraceWrapping.AfterNamespace
// CompactNamespaces
namespace Foo { namespace Bar {

// NamespaceIndentation
typedef int foobar;

// FixNamespaceComments
}}  // namespace Foo::Bar


// BraceWrapping.SplitEmptyNamespace
namespace Bob {
}

// SortUsingDeclarations
using namespace Foo;
using namespace std;
