#include <iostream>

/*
Concept: explicit type conversion with static_cast

Hinglish intuition:
- static_cast se double ko int me clearly convert karte hain.
- Ye intent ko obvious banata hai.
*/

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{
	print(static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int

	return 0;
}