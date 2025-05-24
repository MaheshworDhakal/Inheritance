#include<iostream>
 using namespace std;
 class professor
 {
    private:
    string p_name;
    string department;
    int year;
    public:
    professor()
    {
        cout<<"enter the name of the professor :"<<endl;
        getline(cin,p_name);
        cout<<"enter the department of the pofessor:"<<endl;
        getline(cin,department);
       
        cout<<"enter the year:"<<endl;
        cin>>year;
    

    
    }
    void pdisplay()
    {
        cout<<"name of pofessor:"<<p_name<<endl;
        cout<<"department of pofessor :"<<department<<endl;
        cout<<"yerar:"<<year<<endl;

    }
 };
 class student
 {
    private:
    string name,faculty;
    public:
    student()
    {
        cout<<"enter the name of student :"<<endl;
        cin>>name;
        cout<<"enter the faculty"<<endl;
        cin>>faculty;
       
       
    }
     void sdisplay()
        {
            cout<<"name of student :"<<name<<endl;
            cout<<"faculty:"<<faculty<<endl;
        }
 };
 class course :private professor,private student
 {
    public:
    string coursename;
    int coursecode,credit;

    course()
    {
        cout<<"enter a course name:"<<endl;
        cin>>coursename;
        cout<<"enter the course code and credit :"<<endl;
        cin>>coursecode>>credit;

    }
    void cdisplay()
    {
        pdisplay();
        sdisplay();
        cout<<"course name:"<<coursename<<endl;
        cout<<"course code:"<<coursecode<<endl;
        cout<<"credit:"<<credit<<endl;
    }
 };
 int main()
 {
    course s;
   
    s.cdisplay();
 }