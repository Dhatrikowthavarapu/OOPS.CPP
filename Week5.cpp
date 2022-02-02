1. #include <iostream>
using namespace std;
class compare
{
    public:
    int a;
    void get()
    {
        cin>>a;
    }
    void operator ==(compare c2)
    {
        if (a==c2.a) cout<<"Both the objects are same:"<<endl;
        else cout<<"Both are not same";
    }
};
int main()
{
    compare c1,c2;
    cout<<"enter value of c1"<<endl;
    c1.get();
    cout<<"enter value of c2"<<endl;
    c2.get();
    c1.operator ==(c2);
    return 0;
}

======================================================
  
2.#include <iostream>
using namespace std;
class add
{
    public:
    int a;
    void get()
    {
        cin>>a;
    }
    void operator +(add a2)
    {
        cout<<"Sum of these number is:"<<a+a2.a;
    }
};
int main()
{
    add a1,a2;
    cout<<"enter value of a1"<<endl;
    a1.get();
    cout<<"enter value of a2"<<endl;
    a2.get();
    a1.operator +(a2);
    return 0;
}

======================================================

3.#include <iostream>
using namespace std;
class sub
{
    public:
    int a;
    void get()
    {
        cin>>a;
    }
    void operator -(sub s2)
    {
        cout<<"Subtraction of these number is:"<<a-s2.a;
    }
};
int main()
{
    sub s1,s2;
    cout<<"enter value of s1"<<endl;
    s1.get();
    cout<<"enter value of s2"<<endl;
    s2.get();
    s1.operator -(s2);
    return 0;
}

=======================================================

4.#include <iostream>
using namespace std;
class mul
{
    public:
    int a;
    void get()
    {
        cin>>a;
    }
    void operator *(mul s2)
    {
        cout<<"Multiplication of these number is:"<<a*s2.a;
    }
};
int main()
{
    mul s1,s2;
    cout<<"enter value of s1"<<endl;
    s1.get();
    cout<<"enter value of s2"<<endl;
    s2.get();
    s1.operator *(s2);
    return 0;
}

====================================================

5.#include <iostream>
using namespace std;
class divi
{
    public:
    int a;
    void get()
    {
        cin>>a;
    }
    void operator /(divi s2)
    {
        cout<<"division of these number is:"<<a/s2.a;
    }
};
int main()
{
    divi s1,s2;
    cout<<"enter value of s1"<<endl;
    s1.get();
    cout<<"enter value of s2"<<endl;
    s2.get();
    s1.operator /(s2);
    return 0;
}

//MENU DRIVEN PROGRAM
#include <iostream>
using namespace std;
class calc
{
    public:
    int a;
    void get()
    {
        cin>>a;
    }
    void operator ==(calc s2)
    {
        if (a==s2.a) cout<<"Both the objects are same:"<<endl;
        else cout<<"Both are not same\n";
    }
    void operator +(calc s2)
    {
        cout<<"addition of these number is:"<<a+s2.a<<endl;
    }void operator -(calc s2)
    {
        cout<<"subtraction of these number is:"<<a-s2.a<<endl;
    }void operator *(calc s2)
    {
        cout<<"multiplication of these number is:"<<a*s2.a<<endl;
    }void operator /(calc s2)
    {
        cout<<"division of these number is:"<<a/s2.a<<endl;
    }
};
int main()
{
    int n;
    while(1)
    {
        cout<<"Enter the number: \n1.compare \n2.addition \n3.subtraction \n4.multiplication \n5.division \n6.exit "<<endl;
        cin>>n;
        calc s1,s2;
        if (n==1 or n==2 or n==3 or n==4 or n==5){
            cout<<"enter value of s1"<<endl;
            s1.get();
            cout<<"enter value of s2"<<endl;
            s2.get();
        }
        switch(n)
        {
            case 1:{
                s1.operator ==(s2);
                break;
            }
            case 2:{
                s1.operator +(s2);
                break;
            }
            case 3:{
                s1.operator -(s2);
                break;
            }
            case 4:{
                s1.operator *(s2);
                break;
            }
            case 5:{
                s1.operator /(s2);
                break;
            }
            case 6:{
                cout<<"End of the program\n"
                exit(0);
                break;
            }
            default:{
                cout<<"Invalid Input\n";
            }
        }
    }
    return 0;
}
