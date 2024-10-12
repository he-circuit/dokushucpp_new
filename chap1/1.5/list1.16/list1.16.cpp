#include <iostream>

int main()
{
    float f = -1234.5678f;
    std::cout << f << std::endl;

    int i = f;

    std::cout << i << std::endl;

    uint u = i;

    std::cout << u <<std::endl;

    ushort s = u;

    std::cout << s << std::endl;

    u = s;

    std::cout << u<< std::endl;

    f = u;

    std::cout << f << std::endl;
}