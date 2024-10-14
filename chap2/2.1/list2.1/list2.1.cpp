#include <iostream>

struct product
{
    int id;
    int price;
    int stock;
};

int main()
{
    product pen;

    pen.id = 0;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen;

    std::cout << "id = " << ptr->id << std::endl;
    std::cout << "price = " << ptr->price << std::endl;
    std::cout << "stock = " << ptr->stock << std::endl;
}