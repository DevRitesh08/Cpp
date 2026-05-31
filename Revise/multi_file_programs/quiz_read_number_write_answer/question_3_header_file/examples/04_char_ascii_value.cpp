#include <iostream>

/*
Concept: char to int conversion

Hinglish intuition:
- char internally ek numeric code hold karta hai.
- static_cast<int>() se us code ko print kar sakte hain.
*/

int main()
{
    char ch{ 97 }; // 97 is ASCII code for 'a'
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

    return 0;
}