#include <iostream>
#include <string>

/*
Reference:
https://www.learncpp.com/cpp-tutorial/naming-collisions-and-an-introduction-to-namespaces/

Namespace
- A scope that groups identifiers to avoid name conflicts.

std Namespace
- Contains identifiers from the C++ Standard Library.
- Examples:
    std::cout
    std::cin
    std::string

Why namespaces?
- Prevent naming conflicts between your identifiers and library identifiers.

Example:
int cout{};      // your variable
std::cout << 5;  // standard library cout

Without namespaces, both would be named cout and conflict.

Scope Resolution Operator (::)
- Used to access an identifier inside a namespace.

Examples:
std::cout
std::cin
std::string

Key Point:
If an identifier belongs to a namespace, you must tell the compiler which
namespace it belongs to using ::.

Explicit Namespace Qualifier:
Use std:: to access identifiers in std namespace.

Examples:
std::cout
std::cin
std::string

:: (Scope Resolution Operator)
- Tells compiler which namespace an identifier belongs to.

Example:
std::cout
    ^      ^
namespace  identifier

Best Practice:
Prefer explicit namespace qualifiers (std::).

using namespace std;
- Makes std identifiers accessible without std::

Example:
using namespace std;
cout << "Hello";

Why avoid it?
- Can cause name conflicts
- Creates ambiguity
- Future std additions may break code

Example:
int cout();

using namespace std;

cout << "Hello";  // compiler doesn't know:
                                 // your cout or std::cout ?

Rule:
Avoid using namespace std;
Use std::cout, std::cin, std::string, etc.
*/

int main()
{
        int cout{}; // your variable in current scope
        (void)cout;

        std::cout << "Namespace note demo\n";
        std::string topic{"naming collisions and namespaces"};
        std::cout << "Topic: " << topic << '\n';

        return 0;
}