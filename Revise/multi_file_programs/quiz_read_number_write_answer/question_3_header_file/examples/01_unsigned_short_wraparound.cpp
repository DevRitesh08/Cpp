#include <iostream>

/*
Concept: unsigned short wrap-around

Hinglish intuition:
- unsigned short ka range fixed hota hai.
- range se bahar value dene par modulo wrap-around hota hai.
*/

int main()
{
    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of range, so value wraps around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is also out of range, so value wraps around
    std::cout << "x is now: " << x << '\n';

    return 0;
}