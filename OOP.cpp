#include<iostream>
using namespace std;

class Person{
    public:
    int id; 
    string *name;
    
    Person(int x)
    {
        cout<<"han boiy"<<endl;
    }


};
struct cust 
{
    int p;
};

int main()
{
    cust *p = new cust();
    Person o(2);
    o.id=0;
    cout<<o.id<<endl;



}