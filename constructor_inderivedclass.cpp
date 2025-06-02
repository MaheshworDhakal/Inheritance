// //case:1 no base and derived constructor
// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//         int num1;
//     public:
//         void setdata()
//         {
//             cout<<"enter a number of base class :\n";
//             cin>>num1;

//         }
//         void display()
//         {
//             cout<<"the number is : "<<num1<<endl;

//         }
// };
// class derived:public base
// {
//     protected:
//     int num2;
//     public:
//     void setdata()
//         {
//             base::setdata();
//             cout<<"enter the number of derived class:\n";
//             cin>>num2;

//         }
//         void display()
//         {
//             base::display();
//             cout<<"the number is : "<<num2<<endl;
//         }
    
// };
// int main()
// {
//     derived d;
//     d.setdata();
//     d.display();
// }






//constructor in both base and derived class 
// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//         int num1;
//     public:
//         base()
//         {
//             cout<<"enter a number of base class :\n";
//             cin>>num1;

//         }
//         void display()
//         {
//             cout<<"the number is : "<<num1<<endl;

//         }
// };
// class derived:public base
// {
//     protected:
//     int num2;
//     public:
//     derived()
//         {
        
//             cout<<"enter the number of derived class:\n";
//             cin>>num2;

//         }
//         void display()
//         {
//             base::display();
//             cout<<"the number is : "<<num2<<endl;
//         }
    
// };
// int main()
// {
//     derived d;
    
//     d.display();
// }





//constructor in base class only
// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//         int num1;
//     public:
//         base()
//         {
//             cout<<"enter a number of base class :\n";
//             cin>>num1;

//         }
//         void display()
//         {
//             cout<<"the number is : "<<num1<<endl;

//         }
// };
// class derived:public base
// {
//     protected:
//     int num2;
//     public:
//     void setdata()
//         {
        
//             cout<<"enter the number of derived class:\n";
//             cin>>num2;

//         }
//         void display()
//         {
//             base::display();
//             cout<<"the number is : "<<num2<<endl;
//         }
    
// };
// int main()
// {
//     derived d;
//     d.setdata();
//     d.display();
// }




// //constructor in derived class only
// // #include<iostream>
// // using namespace std;
// // class base
// // {
// //     protected:
// //         int num1;
// //     public:
// //         void setdata()
// //         {
// //             cout<<"enter a number of base class :\n";
// //             cin>>num1;

// //         }
// //         void display()
// //         {
// //             cout<<"the number is : "<<num1<<endl;

// //         }
// // };
// // class derived:public base
// // {
// //     protected:
// //     int num2;
// //     public:
// //     derived()
// //         {
        
// //             cout<<"enter the number of derived class:\n";
// //             cin>>num2;

// //         }
// //         void display()
// //         {
// //             base::display();
// //             cout<<"the number is : "<<num2<<endl;
// //         }
    
// // };
// // int main()
// // {
// //     derived d;
// //     d.setdata();
    
// //     d.display();
// // }


// //paramaterized constructor in both base and derived class

// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//         int num1;
//     public:
//         base(int a)
//         {
//             cout<<"enter a number of base class :\n";
//             cin>>num1;

//         }
//         void display()
//         {
//             cout<<"the number is : "<<num1<<endl;

//         }
// };
// class derived:public base
// {
//     protected:
//     int num2;
//     public:
//     //derived(int data):base (data) also valid and below also valid 
//     derived(int data,int se):base( data) //here only data not int data and it is not posible to there exist only base p constructor
//     {
//         //base para constructor caled first  then derived called 
//         cout <<"enter the number\n";
//         cin>>num2;
//     }
//     void setdata()
//         {
        
//             cout<<"enter the number of derived class:\n";
//             cin>>num2;

//         }
//         void display()
//         {
//             base::display();
//             cout<<"the number is : "<<num2<<endl;
//         }
    
// };
// int main()
// {  //derive d(5) also valid and below also valid
//     derived d(5,3);
//     d.setdata();
//     d.display();
// }



// //having paramerize constructor in only derive4d class is possiable
// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//         int num1;
//     public:
    
//         void setdata()
//         {
//             cout<<"enter a number of base class :\n";
//             cin>>num1;

//         }
//         void display()
//         {
//             cout<<"the number is : "<<num1<<endl;

//         }
// };
// class derived:public base
// {
//     protected:
//     int num2;
//     public:
//     derived(int x)
//         {
        
//             cout<<"enter the number of derived class:\n";
//             cin>>num2;

//         }
//         void display()
//         {
//             base::display();
//             cout<<"the number is : "<<num2<<endl;
//         }
    
// };
// int main()
// {
//     derived d(5);
//     d.setdata();
    
//     d.display();
// }




//default constructor in base class and paramerized constructor in derived classs 
// is no any problem in one default c in base and para c in derived

// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//         int num1;
//     public:
//         base()
//         {
//             cout<<"ente the value of num1:\n";
//             cin>>num1;
            
            

//         }
//         void display()
//         {
//             cout<<"the number is : "<<num1<<endl;

//         }
// };
// class derived:public base
// {
//     protected:
//     int num2;
//     public:
   
//     derived(int a)
//         {
//         cout<<"enter the value of num 2:\n";
//             cin>>num2;
//         }
//         void display()
//         {
//             base::display();
//             cout<<"the number is  derived: "<<num2<<endl;
//         }
    
// };
// int main()
// {
   
//        derived d1(5);
 
    
//     d1.display();
// }





//multiple constructor and single constructor in derived 
#include<iostream>
using namespace std;
class base
{
    protected:
        int num1,num3;
    public:
        base()
        {
            cout<<"ente the value of num3:\n";
            cin>>num3;
            
            

        }
        base (int data)
        {
            num1=data;
        }
        void display()
        {
            cout<<"the first  number of base  is : "<<num1<<endl;
            cout<<"the third numbe of the base is :"<<num3<<endl;

        }
};
class derived:public base
{
    protected:
    int num2;
    public:
   
   //derived(int a)
    //base defualt construuctor is called but para c of base not called in previous way

  #include <iostream>
using namespace std;

class Base {
protected:
    int num1, num3;

public:
    Base() {
        cout << "Enter the value of num3:\n";
        cin >> num3;
    }

    Base(int data) : num1(data) {
        // num3 will be initialized by the default constructor
    }

    void display() {
        cout << "The first number of base is: " << num1 << endl;
        cout << "The third number of the base is: " << num3 << endl;
    }
};

class Derived : public Base {
protected:
    int num2;

public:
    Derived() {
        cout << "Enter the value of num2:\n";
        cin >> num2;
    }

    Derived(int a) : Base() {  // Explicitly call the default constructor of Base
        cout << "Enter the value of num2:\n";
        cin >> num2;
    }

    void display() {
        Base::display();
        cout << "The number in derived: " << num2 << endl;
    }
};

int main() {
    Derived d1;
    d1.display();

    cout << endl;

    Derived d2(5);
    d2.display();

    return 0;
}
