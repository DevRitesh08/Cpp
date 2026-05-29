#include "io.h"
#include <iostream>

/*
Hinglish intuition:
- io.h me declaration hai, io.cpp me definition.
- header guard ki wajah se same header dobara include nahi hota.
- ye best practice hai: declaration ek jagah, definition ek jagah.
*/

int readNumber()
{
    // user input read kar rahe hain
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    // final answer print kar rahe hain
    std::cout << "The answer is: " << x << '\n';
}
