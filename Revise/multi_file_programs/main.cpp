#include <iostream>
#include "constant.h"
#include "ben.h"

int main() 
{
    // Shared values are usually placed in a header so multiple .cpp files can use them.
    std::cout << "My favorite number is: " << fav_no << std::endl;

    // Declare an object here, but keep its behavior in another source file.
    ben ben ;

    // Call the member function defined in ben.cpp.
    ben.alien();

    // main() is the entry point; other files only run when main calls them.
    return 0;
}

// Run from terminal:
// cd to the directory containing these files, then compile and run as follows:
// g++ main.cpp ben.cpp -o main   -> builds the program as main.exe , else  it will be a.out 
// .\main                        -> runs the built program in PowerShell -> if a.out is built, run it with ./a.out in terminal.
