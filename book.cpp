#include <iostream>
using namespace std;
class Book
{
private:
    string name, colour;
    string author_name, price;
    int quantity;

public:
    void set_name(string n)
    {
        name = n;
    }

    void set_colour(string c)
    {
        colour = c;
    }

    void set_author(string a)
    {
        author_name = a;
    }

    void set_price(string p)
    {
        price = p;
    }

    void set_quantity(int q)
    {
        quantity = q;
    }

    void get_name()
    {
        cout << name << endl;
    }

    void get_colour()
    {
        cout << colour << endl;
    }
    void get_author()
    {
        cout << author_name << endl;
    }
    void get_price()
    {
        cout << price << endl;
    }
    int get_quantity()
    {
        return quantity;
    }
};
int main()
{

    Book b1;
    b1.set_name("Shinning stars");
    b1.set_colour("Brown");
    b1.set_author("William Marth");
    b1.set_price("1000rs");
    b1.set_quantity(2);

    b1.get_name();
    b1.get_colour();
    b1.get_author();
    b1.get_price();
    cout << b1.get_quantity() << endl;
}