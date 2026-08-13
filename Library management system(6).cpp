#include <iostream>
using namespace std;

class Library
{
public:
    class Book
    {
        int bookID;
        string bookName;
        string authorName;
        float price;

    public:
        Book()
        {
            bookID = 0;
            bookName = "Unknown";
            authorName = "Unknown";
            price = 0;
        }

        Book(int id, string name, string author, float p)
        {
            bookID = id;
            bookName = name;
            authorName = author;
            price = p;
        }

        void display()
        {
            cout << "\nBook ID: " << bookID;
            cout << "\nBook Name: " << bookName;
            cout << "\nAuthor Name: " << authorName;
            cout << "\nPrice: " << price << endl;
        }

        friend void compareBooks(Book b1, Book b2);

        ~Book()
        {
            cout << "\nBook object destroyed: " << bookID << endl;
        }
    };
};

void compareBooks(Library::Book b1, Library::Book b2)
{
    if (b1.price > b2.price)
        cout << "\n" << b1.bookName << " is more expensive.";
    else if (b2.price > b1.price)
        cout << "\n" << b2.bookName << " is more expensive.";
    else
        cout << "\nBoth books have the same price.";
}

int main()
{
    Library::Book b1(101, "C++ Programming", "Bjarne Stroustrup", 800);
    Library::Book b2(102, "Java Programming", "James Gosling", 600);

    b1.display();
    b2.display();

    compareBooks(b1, b2);

    return 0;
}
