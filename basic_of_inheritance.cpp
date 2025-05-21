//accessing  base class function from derived class functoion 
#include<iostream>
using namespace std;
class base
{
    protected:
    string name;
    int  age;
    public:
    base()
    {
        cout<<"enter the name :"<<endl;
        getline(cin,name);
        cout<<"enter the age:"<<endl;
        cin>>age;
    }
    void display()
    {
        cout<<"by display:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;

    }
};
class derived : public base
{
    public:
    void showdata()
    {
        cout<<"by show data :"<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"age:"<<age ;
    }
};
int main ()
{
    derived d;
    d.display();
    d.showdata();
}