#include <iostream>
using namespace std;
class Dog
{
private:
    string name, colour;
    string weight, breed;
    int age;

public:
    void set_info(string n, string c, string w, string b, int a)
    {

        name = n;
        colour = c;
        weight = w;
        breed = b;
        age = a;
    }

    void get_info()
    {

        cout << "The name is: " << name << endl;
        cout << "The colour is: " << colour << endl;
        cout << "The weight is: " << weight << endl;
        cout << "The breed is: " << breed << endl;
        cout << "The age is: " << age << endl;
    }

    void speak()
    {
        cout << " Say's  Woff!  woff! " << endl;
    }
};

int main()
{
    Dog d1;
    d1.set_info("Buzo", "Brown", "18 kg", "Labrador Retriever", 7);
    d1.get_info();
    d1.speak();
    cout << "======== Dog 2 Info ========" << endl;
    Dog d2;
    d2.set_info("Barki", "Black", "20 kg", "Golden Retriever", 10);
    d2.get_info();
    d2.speak();
    return 0;
}