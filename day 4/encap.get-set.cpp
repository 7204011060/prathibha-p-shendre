#include <iostream>
using namespace std;

class Person 
{
private:
    string name;

public:
    void setname(string n)
    {
        name = n;
    
    }

    string getname()
    {
        return name;
    
    }
};

int main ()
{
    Person P1;
    P1.setname("nihalL");
    cout << P1.getname() << endl;
}