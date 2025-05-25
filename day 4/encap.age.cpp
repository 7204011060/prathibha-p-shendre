#include <iostream>
using namespace std;

class Person 
{
private:
    string name;
    int age;

public:
    void setname(string n)
    {
        name = n;
    
    }

    string getname()
    {
        return name;
    
    }

    void setage (int a)
    {
        age = a;
    }
     
    int getage()
    {
        return age;
    }
};

int main ()
{
    Person P1;
    P1.setname("nihalL");
    cout << P1.getname() << endl;
    P1.setage(24);
    cout << P1.getage() << endl;
}