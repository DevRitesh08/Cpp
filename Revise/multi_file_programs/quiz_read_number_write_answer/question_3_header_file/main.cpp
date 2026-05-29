#include "io.h"

/*
Quiz Question:
Same program, but now use io.h so both .cpp files share one declaration source.

Hinglish intuition:
- Header file ek common contract hai.
- main.cpp ko function names io.h se milte hain.
- io.cpp bhi same header include karta hai so declarations match rehti hain.
*/

int main()
{
    // header se aaye functions ko directly call kar rahe hain
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x + y);
    return 0;
}
