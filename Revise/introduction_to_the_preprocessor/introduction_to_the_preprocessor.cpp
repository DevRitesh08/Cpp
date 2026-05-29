#include <iostream>
#include <string>

/*
Reference:
https://www.learncpp.com/cpp-tutorial/introduction-to-the-preprocessor/

Preprocessor / Macros (concise notes)
- Macros: text-replacement rules processed BEFORE compilation.

Syntax:
#define IDENTIFIER
#define IDENTIFIER replacement_text

Examples:
#define MY_NAME "Alex"
#define PI 3.14159

Important:
- Macros are handled by the preprocessor (before the compiler).
- Macros apply from definition point to end of the file; they are file-scoped.
- Prefer `const` / `constexpr` / functions in modern C++ over macros.

Common Forms:
- Object-like:  #define MAX_SIZE 100
- Function-like: #define SQUARE(x) ((x) * (x))   // avoid in modern C++

Conditional Compilation:
- Macros without replacement text:  #define PRINT_JOE
- #ifdef IDENTIFIER / #ifndef IDENTIFIER / #if 0 / #if 1
- Useful to enable/disable code regions at preprocess time.

Best Practices:
- Macro names in ALL_CAPS.
- Use macros sparingly; prefer type-safe alternatives.
*/

// Small demo showing macro replacement and conditional compilation
#define MY_NAME "Alex"
#define PI 3.14159
#define PRINT_JOE

int main()
{
    std::cout << "Demo: macros are text replacement\n";

#ifdef PRINT_JOE
    std::cout << "PRINT_JOE is defined\n";
#endif

    std::cout << "Name: " << MY_NAME << '\n';
    std::cout << "PI approx: " << PI << '\n';

    // Prefer constexpr instead of macro constants
    constexpr double safe_pi{3.14159};
    std::cout << "constexpr PI: " << safe_pi << '\n';

    return 0;
}

// --------------------------------------------------

// Conditional Compilation

// #ifdef IDENTIFIER
//     code
// #endif

// Meaning:
// Compile code only if IDENTIFIER exists.

// Example:

// #define PRINT_JOE

// #ifdef PRINT_JOE
// std::cout << "Joe";
// #endif

// Output:
// Joe

// --------------------------------------------------

// #ifndef

// #ifndef IDENTIFIER
//     code
// #endif

// Meaning:
// Compile code only if IDENTIFIER does NOT exist.

// Example:

// #ifndef PRINT_BOB
// std::cout << "Bob";
// #endif

// Output:
// Bob

// (PRINT_BOB wasn't defined)

// --------------------------------------------------

// #if 0

// Used to temporarily disable code.

// Example:

// #if 0
// std::cout << "Bob";
// std::cout << "Steve";
// #endif

// Compiler ignores everything inside.

// Equivalent to:
// "Comment out this block"

// --------------------------------------------------

// #if 1

// Always true.

// Example:

// #if 1
// std::cout << "Bob";
// #endif

// Compiler includes the code.

// --------------------------------------------------

// Macro Scope

// Macros work:
// From definition point
//         ↓
// To end of current file

// Example:

// #define MY_NAME "Alex"

// std::cout << MY_NAME;

// Works because MY_NAME is already defined.

// --------------------------------------------------

// Across Multiple Files

// main.cpp

// #define PRINT

// function.cpp

// #ifdef PRINT
// std::cout << "Printing";
// #endif

// Result:
// PRINT is NOT visible in function.cpp

// Reason:
// Macros are file-based.

// --------------------------------------------------

// Best Practices

// ✓ Macro names in ALL_CAPS

// #define MAX_SIZE 100
// #define PRINT_JOE

// ✓ Use macros only when necessary
