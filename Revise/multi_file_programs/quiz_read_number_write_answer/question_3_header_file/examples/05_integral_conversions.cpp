#include <iostream>

/*
Concept: signed and unsigned integer conversions

Hinglish intuition:
- Ek type se doosre integral type me explicit conversion dikhaya gaya hai.
- static_cast se conversion clear hota hai.
*/

int main()
{
    unsigned int u1{ 5 };
    int s1{ static_cast<int>(u1) };
    std::cout << s1 << '\n'; // prints 5

    int s2{ 5 };
    unsigned int u2{ static_cast<unsigned int>(s2) };
    std::cout << u2 << '\n'; // prints 5

    return 0;
}