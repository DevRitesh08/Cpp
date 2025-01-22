# Member Function in C++ Classes

There are 2 ways to define a member function:

- Inside class definition
- Outside class definition

Till now, we have defined the member function inside the class, but we can also define the member function outside the class. To define a member function outside the class definition,

- We have to first declare the function prototype in the class definition.
- Then we have to use the scope resolution:: operator along with the class name and function name.

Example

![alt text](<Screenshot 2024-12-31 135303.png>)

- Note that all the member functions defined inside the class definition are by default inline, but you can also make any non-class function inline by using the keyword inline with them. Inline functions are actual functions, which are copied everywhere during compilation, like pre-processor macro, so the overhead of function calls is reduced.

- Note: Declaring a friend function is a way to give private access to a non-member function.
