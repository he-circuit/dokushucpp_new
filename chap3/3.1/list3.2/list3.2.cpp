#include <iostream>

class product
{
    int id;
public:
    int get_id();
    int get_id() const;
};

int product::get_id()
{
    std::cout << "non-const get_id()" << std::endl;
    return id;
}

int product::get_id() const
{
    std::cout << "const get_id()" << std::endl;
    return id;
}

int main()
{
    product p;
    p.get_id();

    const product cp{};
    cp.get_id();
}