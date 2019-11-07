/// Create a program that gets the name of the user and then outputs "Hello, <user>" where <user> is the name the user.

#include <iostream>

int main()
{
    std::string user;
    std::cout << "Input your username: ";
    std::cin >> user;
    std::cout << "\nHello, " << user << "\n";
    return 0;
}
