#include <iostream>
using namespace std;

class Student
{
private:
    string name, address;
    int roll_No;
    string age;

public:
    void set_data(string n, string add, int roll, string ag)
    {
        name = n;
        address = add;
        roll_No = roll;
        age = ag;
    }

    void get_data()
    {
        cout << " The name is: " << name << endl;
        cout << " The address is: " << address << endl;
        cout << " The roll number is: " << roll_No << endl;
        cout << " The age is: " << age << endl;
    }
};

int main()
{

    Student s1;
    s1.set_data(" Syed Zadaa ", " Sargodha ", 121, "18 years old");
    s1.get_data();
    cout << " ======Student 2 Info====== " << endl;
    Student s2;
    s2.set_data("Syed shah", "Multan", 122, "19 years old");
    s2.get_data();

    return 0;
}