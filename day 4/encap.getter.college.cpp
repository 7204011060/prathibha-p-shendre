#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string college = "CITY ENGINEERING College";

public:
    student(string n)
    {
        name = n;
    }

    string getcollege()
    {
        return college;
    }

    void getdetails()
    {
        cout << "name:" << name << endl;
        cout << "college:" << getcollege() << endl; 
    }
};

int main()
{
    student s1 ("nihi");
    cout << s1.getcollege() << endl;
    s1.getdetails();
    

}