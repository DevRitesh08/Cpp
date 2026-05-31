#include <iostream>

/*
Concept: reading bool values

Hinglish intuition:
- bool ko 0/1 se read kara sakte hain.
- std::boolalpha input ko true/false form me bhi accept karwata hai.
*/

int main()
{
    std::cout << "Enter a bool (0 or 1): ";
    bool a{};
    std::cin >> a;
    std::cout << "You entered: " << a << '\n';

    std::cout << "Enter another bool (true or false): ";
    bool b{};
    std::cin >> std::boolalpha >> b;
    std::cout << "You entered: " << b << '\n';

    return 0;
}