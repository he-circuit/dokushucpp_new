#include <iostream>

struct S
{
    int a;
    int b;
    int c;
};

int main()
{
    S s;

    std::cout << "s.aのアドレス:" << &s.a << std::endl;
    std::cout << "s.bのアドレス:" << &s.b << std::endl;
    std::cout << "s.cのアドレス:" << &s.c << std::endl;
}