//1.Write c++ program to find cube of a number using inline function.
#include <iostream>
using namespace std;
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    cout<<"cube of given number is:"<<cube(5);

    return 0;
}



*******************************************************
//2.Write c++ program to find out square of a number using inine function
#include <iostream>
using namespace std;
inline int sqrt(int a)
{
    return a*a;
}
int main()
{
    cout<<"cube of given number is:"<<sqrt(5);

    return 0;
}


******************************************************
//3..Write c++ program to find addition  of two  numbers using inline function.
#include <iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main()
{
    cout<<"sum of two numbers is:"<<add(5,4);

    return 0;
}


//Class without constructor:
#include <iostream>
using namespace std;
class Person
{
    public:
    char name[50];
    int age;
    float salary;
    void getdata()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void putdata()
    {
        cout<<"person Details:";
        cout<<"\nName is:"<<name;
        cout<<"\nAge is:"<<age;
        cout<<"\nSalary is:"<<salary;
    }
};
int main()
{
    Person p;
    p.getdata();
    p.putdata();
    return 0;
}


*******************************************

//Class with default constructor:
#include <iostream>
using namespace std;
class Person
{
    public:
    char name[50];
    int age;
    float salary;
    Person()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void putdata()
    {
        cout<<"person Details:";
        cout<<"\nName is:"<<name;
        cout<<"\nAge is:"<<age;
        cout<<"\nSalary is:"<<salary;
    }
};
int main()
{
    Person p;
    p.putdata();
    return 0;
}

*********************************

//Class with parametrised constructor:

#include <iostream>
#include<string>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    float salary;
    Person(string a,int b,float c)
    {
       name=a;
       age=b;
       salary=c;
    }
    void putdata()
    {
        cout<<"person Details:";
        cout<<"\nName is:"<<name;
        cout<<"\nAge is:"<<age;
        cout<<"\nSalary is:"<<salary;
    }
};
int main()
{
    Person p("Dhatri",19,100000);
    p.putdata();
    return 0;
}


//constructor overloading:

#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    float salary;
    Person(){
        cout<<"Enter person Details:"<<endl;
        cout<<"Enter name:";
        cin>>name;
        cin>>age;
        cin>>salary;
    }
    Person(string a,int b,float c)
    {
       name=a;
       age=b;
       salary=c;
    }
    void putdata()
    {
        cout<<"person Details:";
        cout<<"\nName is:"<<name;
        cout<<"\nAge is:"<<age;
        cout<<"\nSalary is:"<<salary;
    }
};
int main()
{
    Person p1;
    Person p2("Dhatri",19,100000);
    p1.putdata();
    p2.putdata();
    return 0;
}

//Using destructor:

#include <iostream>
#include<string>
using namespace std;
class Function
{
    public:
    string name;
    int age,a;
    float salary;
    Function()
    {
        cout<<"This is inside Constructor block:"<<endl;
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void Put_data()
    {
        cout<<"Person Details:"<<endl;
        cout<<"Name is:"<<name;
        cout<<endl<<"Age is:"<<age;
        cout<<endl<<"Salary is:"<<salary;
    }
    ~Function ()
    {
        cout<<"Inside destructor"<<endl;
    }
};
int main()
{
    Function f;
    f.Put_data();
    return 0;
}
