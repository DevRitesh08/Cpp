#include <iostream>

/*
Quiz Question:
Modify the program so that readNumber() and writeAnswer() live in io.cpp,
and main.cpp only glues the program together.

Hinglish intuition:
- main.cpp ko bas function ke names pata hone chahiye.
- actual kaam io.cpp me hota hai.
- Isliye main.cpp me forward declarations use karte hain.
*/

// Forward declarations: main.cpp ko bas itna pata hona chahiye ki functions exist karte hain.
int readNumber();
void writeAnswer(int x);

int main()
{
    // main ka kaam sirf flow banana hai
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x + y);
    return 0;
}
