#include <iostream>
using namespace std;

class ShoppingCart
{
    int productID;
    string productName;
    float price;
    int quantity;

public:
    ShoppingCart()
    {
        productID = 0;
        productName = "Unknown";
        price = 0;
        quantity = 0;
    }

    void addProduct(int id, string name, float p)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = 1;
    }

    void addProduct(int id, string name, float p, int q)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    void display()
    {
        cout << "\nProduct ID: " << productID;
        cout << "\nProduct Name: " << productName;
        cout << "\nPrice: " << price;
        cout << "\nQuantity: " << quantity;
        cout << "\nAmount: " << price * quantity << endl;
    }

    friend float totalBill(ShoppingCart cart[], int n);
};

float totalBill(ShoppingCart cart[], int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
        total += cart[i].price * cart[i].quantity;

    return total;
}

int main()
{
    ShoppingCart cart[3];

    cart[0].addProduct(101, "Pen", 20);
    cart[1].addProduct(102, "Notebook", 50, 2);
    cart[2].addProduct(103, "Bag", 800, 1);

    for (int i = 0; i < 3; i++)
        cart[i].display();

    cout << "\nTotal Bill: " << totalBill(cart, 3);

    return 0;
}
