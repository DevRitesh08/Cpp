#include <iostream>

/*
io.cpp me actual definitions hoti hain.
Hinglish intuition:
- main.cpp me sirf promise hota hai ki readNumber() aur writeAnswer() exist karte hain.
- io.cpp me un promises ka actual code hota hai.
- Is file ko compile karna zaroori hai, warna linker ko function ka body nahi milega.
*/

int readNumber()
{
    // user se ek integer lo
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    // answer ko screen par bhejo
    std::cout << "The answer is: " << x << '\n';
}
