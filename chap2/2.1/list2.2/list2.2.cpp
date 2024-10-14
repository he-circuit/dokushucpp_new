#include <iostream>

struct product
{
    int id;
    int price;
    int stock;
};

void show_product(product product)
{
    std::cout << "id = " << product.id << std::endl;
    std::cout << "price = " << product.price << std::endl;
    std::cout << "stock = " << product.stock << std::endl;
}

int main()
{
    product pen = 
    {
        0,
        100,
        200
    };

    show_product(pen);
}