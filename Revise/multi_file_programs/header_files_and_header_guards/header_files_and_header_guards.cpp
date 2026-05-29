#include <iostream>

/*
References:
https://www.learncpp.com/cpp-tutorial/header-files/
https://www.learncpp.com/cpp-tutorial/header-guards/

Header files
- Hold declarations, not most definitions.
- Use them to share declarations across multiple .cpp files.
- Include them with #include.
- Put the same declaration in one header, then include it where needed.

Typical header contents
- Function declarations
- Class definitions
- Const/constexpr variable declarations
- Inline functions
- Type aliases, enums

Typical .cpp contents
- Function definitions
- Global variable definitions (if needed)

Why headers matter
- Avoid duplicate declarations.
- Make multi-file programs easier to organize.
- Keep interfaces separate from implementations.

Header guards
- Prevent the same header from being included more than once in a single translation unit.
- Pattern:
  #ifndef SOME_NAME
  #define SOME_NAME
  ... header contents ...
  #endif

Why they matter
- Stop redefinition errors from repeated includes.
- Important when one header includes another header.

Rules
- Use a unique guard name, usually based on the file name.
- Example: MY_HEADER_H
- Every header should have a guard, or use #pragma once if allowed by the codebase.

Best practice
- Keep headers minimal.
- Include only what you need.
- Prefer forward declarations when possible.
- Put implementation in .cpp files, not headers, unless it must be inline.
*/

int main()
{
    std::cout << "Headers organize declarations; guards prevent double inclusion.\n";
    return 0;
}
