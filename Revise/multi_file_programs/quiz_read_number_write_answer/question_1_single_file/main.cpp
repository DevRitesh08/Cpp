#include <iostream>

/*
Quiz Question:
Write a single-file program that reads two integers, adds them, and prints the answer.
Use three functions:
- readNumber(): user se ek integer le aur return kare
- writeAnswer(int): answer print kare
- main(): dono functions ko jode

Hinglish intuition:
- Is version me sab kuch ek hi file me hai, so easy to understand.
- readNumber() input leta hai.
- writeAnswer() output deta hai.
- main() sirf dono ko connect karta hai.
*/

int readNumber()
{
    // yahan user se number lena hai
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    // yahan final answer print hota hai
    std::cout << "The answer is: " << x << '\n';
}

int main()
{
    // pehle number lo
    int x{ readNumber() };
    // doosra number lo
    int y{ readNumber() };
    // dono ko add karke print karo
    writeAnswer(x + y);
    return 0;
}
