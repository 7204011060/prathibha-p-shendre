#include <iostream>
#include <vector>
using namespace std;

class person
{
public:
    string name;
    string aadhar;
    string pan;

    person(string user_name,string p_card,string a_card)
    {
        name=user_name;
        pan=p_card;
        aadhar=a_card;
    }
    void display_details(){
        cout<<"user details"<<endl;
        cout<<"username"<<name<<endl;
        cout<<"pancard"<<pan<<endl;
        cout<<"aadhar"<<aadhar<<endl;
        cout<<"===============================";
    }
};

int main()
{
    string name,pancard;
    vector<person> list_of_users;
    for ( int i=0; i<2; i++)
    { 
    cout<<"enter the name"<< i+1 << ":" << endl;
    cin>>name;
    cout<<"enter the pancard" << i+1 << ":" << endl; 
    cin >> pancard;
    cout<< "enter the aadhar number" <<i+1<< ":"<< endl;
    cin>> aadhar number;
    list_of_users.push_back(person(name,pancard));
    }
    for(person users : list_of_users)
    {
        users.display_details();
    }
}
    
