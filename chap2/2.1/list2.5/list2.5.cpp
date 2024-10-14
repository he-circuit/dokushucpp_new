#include <iostream>

union U
{
    int a;
    int b;
    int c;
};

int main()
{
    U u ={42};

    std::cout << "u.a = " << u.a << std::endl;
    std::cout << "u.b = " << u.b << std::endl;
    std::cout << "u.c = " << u.c << std::endl;

    u.c = 1024;

    std::cout << "u.a = " << u.a << std::endl;
    std::cout << "u.b = " << u.b << std::endl;
    std::cout << "u.c = " << u.c << std::endl;
}