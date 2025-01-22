# Access Modifiers or Access specifiers

In C++ classes, we can control the access to the members of the class using Access Specifiers. Also known as access modifier, they are the keywords that are specified in the class and all the members of the class under that access specifier will have particular access level.

In C++, there are 3 access specifiers that are as follows:

- Public: Members declared as public can be accessed from outside the class.
- Private: Members declared as private can only be accessed within the class itself.
- Protected: Members declared as protected can be accessed within the class and by derived classes.

If we do not specify the access specifier, the private specifier is applied to every member by default.

![alt text](<Screenshot 2024-12-31 134136.png>)

In the above example, we cannot access the data member geekname outside the class. If we try to access it in the main function using dot operator, obj1.geekname, then program will throw an error.
