# Quiz: readNumber, writeAnswer, and headers

Reference:
https://www.learncpp.com/cpp-tutorial/header-files/
https://www.learncpp.com/cpp-tutorial/header-guards/

## Intuition

The same problem is solved three ways:

1. Single file
- `main.cpp` contains the function declarations and definitions together.
- Good for learning the flow.

2. Separate `.cpp` files
- `main.cpp` knows the function names.
- `io.cpp` knows how to do the work.
- This separates "what to do" from "how it is done".

3. Header file + guards
- `io.h` becomes the shared contract.
- Both `.cpp` files include the header.
- Guards stop the header from being included twice.

## What to remember

- `readNumber()` gets one integer and returns it.
- `writeAnswer(int)` prints the sum.
- `main()` only connects the steps.
- A header file stores declarations.
- A `.cpp` file stores definitions.
- Header guards prevent duplicate inclusion.
