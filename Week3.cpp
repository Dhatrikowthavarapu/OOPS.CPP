1.#include<iostream>
using namespace std;
class Test{
    int a,b,c;
    public:
    Test(){
        cout<<"enter values:"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
    }
    friend void display(Test t1);
};
void display(Test t1){
    cout<<"Entered values are:"<<endl<<t1.a<<endl<<t1.b<<endl<<t1.c<<endl;
}
int main(){
    Test t1;
    display(t1);
    return 0;
}


2.#include<iostream>
using namespace std;
class Test2;
class Test1
{
    int a;
    public:
    Test1()
    {
        cout<<"Enter the values of a:"<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<"The values are:"<<endl<<a<<endl;
    }
    friend void sub(Test1,Test2);
};
class Test2{
    int x;
    public:
    Test2()
    {
        cout<<"Enter the values:"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<<"The values are:"<<endl<<x<<endl;
    }
    friend void sub(Test1,Test2);
};
void sub(Test1 t1,Test2 t2)
{
    cout<<"The Abosulute Difference is:"<<abs(t1.a-t2.x)<<endl;
}
int main(){
    Test1 t1;
    Test2 t2;
    t1.display();
    t2.display();
    sub(t1,t2);
    return 0;
}


3.#include<iostream>
using namespace std;
class Student
{
    int rno;
    string name;
    public:
    void read()
    {
        cout<<"Enter the Details:"<<endl;
        cin>>name;
        cin>>rno;
    }
    void display()
    {
        cout<<"The Student Details are:"<<endl<<"Name:"<<name<<endl<<"Roll number:"<<rno<<endl;
    }
};
int main(){
    Student s1,s2,s,s3,s4,s5;
    s1.read();
    s1.display();
    s2.read();
    s2.display();
    s3.read();
    s3.display();
    s4.read();
    s4.display();
    s5.read();
    s5.display();
    return 0;
}

4.#include<iostream>
using namespace std;
class Bank
{
    int ano,bal,d,w;
    string actype,name;
    public:
    void InsertcustomerDetails()
    {
        cout<<"Enter the Details:"<<endl;
        cin>>ano;
        cin>>actype;
        cin>>name;
        cin>>bal;
    }
    void AmountDeposit()
    {
        cout<<"Enter the amount to be deposit:"<<endl;
        cin>>d;
    }
    void WithDrawamount(){
        cout<<"Enter the amount to be withdraw:"<<endl;
        cin>>w;
    }
    void display(){
        cout<<"Customer Details:"<<endl<<"Acct number:"<<ano<<endl<<"Acct type"<<actype<<endl<<"Name:"<<name<<endl<<"Balance:"<<(bal+d-w)<<endl;
    }
};
int main(){
    Bank b;
    b.InsertcustomerDetails();
    b.AmountDeposit();
    b.WithDrawamount();
    b.display();
    return 0;
}



//1.Over load adition function which accepts 2,3,4 integers and returns the additive results.
/*Over loading with return type*/
#include<iostream>
using namespace std;
class add
{
    public:
    int a,b,c,d;
    void addition(a,b);
    void addition(a,b,c);
    add()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
        cout<<"Enter b:"<<endl;
        cin>>b;
        cout<<"Enter c:"<<endl;
        cin>>c;
    }
    void add::addition(int a,int b)
    {
        c= a+b;
        cout<<"addition of two integer numbers is :"<<c<<endl;
    }

    void add::addition(int a,int b,int c)
    {
        d=a+b+c;
        cout<<"addition of three integer numbers is :"<<d<<endl;
    }
};
int main()
{
    int x,y,z;
    add ad;
    ad.addition(x,y);
    ad.addition(x,y,z);
    return 0;
}
