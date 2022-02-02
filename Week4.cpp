/*1.Create a class A with the variables x,y. Create a method to set the date to x and y. Create a subclass B with the variable z.
create a method to set the data to z.Write a method to display the information.*/
 
#include <iostream>
using namespace std;
class Demo{
     public:
     int x,y;
     void set_data(){
          cout<<"Enter the value of x:"<<endl;
          cin>>x;
          cout<<"Enter the value of y:"<<endl;
          cin>>y;
     }
};
class Demo1 : public Demo{
     public:
     int z;
     void get_data(){
          cout<<"Enter the value of z:"<<endl;
          cin>>z;
     }
     void display(){
          cout<<"The values of x:"<<x<<"and y:"<<y<<"and z:"<<z;
     }
};
int main(){
     Demo1 b;
     b.set_data();
     b.get_data();
     b.display();
     return 0;
}


/*2.Create a class Q with a variable q and consider default constructor for setting to q. Create a subclass R with a variable r and consider default constructor for setting to r.
 Create a subclass to R as S with a variable s and consider a default constructor for setting for s. Create a display function in each of the classes.  Create a main method to call the functions */

#include <iostream>
using namespace std;
class Q{
     public:
     int q;
     Q(){
          cout<<"Enter the value of q:"<<endl;
          cin>>q;
     }
     void display1(){
          cout<<"The value of q is "<<q<<endl;
     }
};
class R : public Q{
     public:
     int r;
     R(){
          cout<<"Enter the value of r:"<<endl;
          cin>>r;
     }
     void display2(){
          cout<<"The values of r is "<<r<<endl;
     }
};
class S: public R{
     public:
     int s;
     S(){
          cout<<"Enter the value of s:"<<endl;
          cin>>s;
     }
     void display3(){
          cout<<"The value of s is "<<s<<endl;
     }
};
int main(){
     S sub;
     sub.display1();
     sub.display2();
     sub.display3();
     return 0;
}


/*3.Create a class person with the filed first name, last name. Use parameterized method to set the values to the variables at runtime. 
  Create sub class Employee with the variable eno, edept, esal. Create parameterized method for setting the data and default method for display the information.*/

#include <iostream>
using namespace std;
class Person{
     public:
     string a,b;
     void get_data(string first_name,string last_name){
          a=first_name;
          b=last_name;
     }
};
class Employee : public Person{
     public:
     int x;
     string y;
     float z;
     void set_data(int eno,string edept,float esalary){
          x=eno;
          y=edept;
          z=esalary;
     }
     void display2(){
          cout<<"Employee Details "<<endl;
          cout<<"First name is: "<<a<<endl;
          cout<<"Last name is: "<<b<<endl;
          cout<<"Enumber is: "<<x<<endl;
          cout<<"Edepartment is: "<<y<<endl;
          cout<<"Esalary is: "<<z<<endl;
     }
};
int main(){
     Employee e;
     e.get_data("Dhatri","Priya");
     e.set_data(1,"IT",50000);
     e.display2();
     return 0;
}


/*4.Modify the above program by creating a subclass of Employee called Department with the variables dno, dname, experience. 
Set parameterized method for setting the data and display all the information.*/

#include <iostream>
using namespace std;
class Person{
     public:
     string a,b;
     void get_data(string first_name,string last_name){
          a=first_name;
          b=last_name;
     }
};
class Employee : public Person{
     public:
     int x;
     string y;
     float z;
     void set_data(int eno,string edept,float esalary){
          x=eno;
          y=edept;
          z=esalary;
     }
};
class Department: public Employee{
	public:
		int p;
		string q;
		float r;
		void display(int dno,string dname,float expe){
			p=dno;
			q=dname;
			r=expe;
		}
		void display2(){
          	          cout<<"Employee Details "<<endl;
          	          cout<<"First name is: "<<a<<endl;
                      cout<<"Last name is: "<<b<<endl;
	          cout<<"Enumber is: "<<x<<endl;
	          cout<<"Edepartment is: "<<y<<endl;
	          cout<<"Esalary is: "<<z<<endl;
	          cout<<"Department number is:"<<p<<endl;
	          cout<<"Department name is:"<<q<<endl;
	          cout<<"Experience is:"<<r<<"years"<<endl;
     	}
};
int main(){
     Department e;
     e.get_data("Dhatri","Priya");
     e.set_data(1,"IT",50000);
     e.display(250,"web",4.5);
     e.display2();
     return 0;
}
 
/*5.Create a class named Employee with the following details
 Data members: (a)    name (b) address (c) age (d) gender
Methods :  (a ) Display () to show the employee details
Create another class FullTimeEmployee that inherits the Employee class :
Data members : (a)    Salary        	Designation
Method : (a)    Display () to show the salary and designation along  with other employee details.
Create another class PartTimeEmployee that inherits the Employee class : 
Data members : (a)    Workinghours        	rateperhour
Methods : (a)    caluculatepay() to caluculate the amount payable 
                 (b)   display() to show the amount payable along with the employee details.*/

#include<iostream>
using namespace std;
class Employee{
Public:
string name,ads,gender;
	int age;
	void display1(){
		cout<<"Enter Employee Details:";
cout<<endl<<"Enter Name:";
		cin>>name;
		cout<<endl<<"Enter Address:";
		cin>>ads;
		cout<<endl<<"Enter Age :";
		cin>>age;
		cout<<endl<<"Enter Gender :";
		cin>>gender;
	}
};
class FullTimeEmployee : public Employee{
	public:
	float salary;
	string desig;		
	void display2(){
		cout<<endl<<"Enter Salary:";
		cin>>salary;
		cout<<endl<<"Enter degignation:";
		cin>>desig;
	}
};
class PartTimeEmployee : public FullTimeEmployee{
	public:
	float wh,rate,cal;
	PartTimeEmployee()
	{
		cout<<endl<<"Enter no.of working hours:";
		cin>>wh;
		cout<<endl<<"Enter rate per hour:";
		cin>>rate;
    }
    void caluculatepay()
    {
    	cal=(wh*rate);
cout<<"Total Amount Payable is:"<<cal;
	}
	void display3()
	{
		cout<<"Employee Details"<<endl;
		cout<<"Name is:"<<name<<endl;
		cout<<"Address is:"<<ads<<endl;
		cout<<"Age is:"<<age<<endl;
		cout<<"Gender is:"<<gender<<endl;
		cout<<"Salary is:"<<salary<<endl;
		cout<<"Designation is:"<<desig<<endl;
	}
};
int main()
{
	PartTimeEmployee p;
	p.display1();
	p.display2();
	p.display3();
	p.caluculatepay();
	return 0;
}


/*6.Create a class Employer with company_name and city. Create a parameterised method companyDetails(String, String) to set the values to the two variables.
Create a showCompanyDetails() method to display the company information.Create a subclass Employee with eno,ename,esal. Create a parameterized constructor to set the values 
to these variables. create a showEmployee() to display the information.Create a main method to test the classes*/

#include <iostream>
using namespace std;
class Employer{
    string x,y;
    public:
    void get_data(string comy_name,string city)
    {
        x=comy_name;
        y=city;
    }
    void showCompanyDetails(){
        cout<<"Company information:\nCompany name:"<<x<<endl<<"City:"<<y<<endl;
    }
};
class Employee : public Employer{
    int a,c;
    string b;
    public:
    Employee(int eno,string ename,float esal){
        a=eno;
        b=ename;
        c=esal;
    }
    void showEmployee(){
cout<<"Employee Details:\nENo."<<a<<endl<<"Ename:"<<b<<endl<<"Esal:"<<c<<endl;
    }
};
int main(){
    Employee e(1,"Dhatri",500000);
    e.get_data("TCS","Delhi");
    e.showEmployee();
    e.showCompanyDetails();
    return 0;
}


/*7.Create a base class called person with SSN  and name as data types with getdata and display as member functions.
  Derive a new class called student with rollno, branch,mark1,mark2,mark3 as datamembers and getdata and display  as member functions and finally derive a new  class
  called grade from student class in that calculate the average for marks and display the  grade for the  student  a. A grade >=90%  b. B grade>=80%
 c. C grade>=70%      d. Less than 70% fail.   */      

#include <iostream>
using namespace std;
class Person{
    string SSN,name;
    public:
    void get_data()
    {
        cout<<"Enter SSN and name:"<<endl;
        cin>>SSN;
        cin>>name;
    }
    void display1(){
        cout<<"Person Details:\n SSN:"<<SSN<<endl<<"Name:"<<name<<endl;
    }
};
class Student : public Person{
    public:
    int rno,m1,m2,m3;
    string b;
    void set_data(){
        cout<<"\nEnter roll no:";
        cin>>rno;
        cout<<"\nEnter branch:";
        cin>>b;
        cout<<"\nEnter marks1:"; 
        cin>>m1;
        cout<<"\nEnter marks2:"; 
        cin>>m2;
        cout<<"\nEnter marks3:";
        cin>>m3;
    }
    void display2(){
        cout<<"Student Details:\nroll no."<<rno<<endl<<"branch:"<<b<<endl<<"marks1:"<<m1<<endl<<"marks2"<<m2<<endl<<"marks3"<<m3<<endl;
    }
};
class Grade: public Student{
    public:
    int a;
    void avg(){
        a=((m1+m2+m3)/3);
    }
};
int main(){
    Grade g;
    g.get_data();
    g.set_data();
    g.display1();
    g.display2();
    g.avg();
    g.a;
    {
        if (g.a>=90){
            cout<<"A grade"<<endl;
        }   
        if (g.a>=80){
            cout<<"B grade"<<endl;
        }
        if (g.a>=70){
            cout<<"C grade"<<endl;
        }
        if (g.a<70){
            cout<<"FAIL"<<endl;
        }
    return 0;
    }
}

/*8..  Create a class Person with the fileds first name and last name. Set the data and print it. 
Create two subclasses employee and staff with the variables and methods:
Employee:
Variables: eno, esal, designation
Methods: setEmployee(int, double, String) and displayEmployee()
Staff:
Variable: sno,experience
Methods:setStaff(int,int) and displayStaff()
Create a class to access the information of a class person */
 #include <iostream>
using namespace std;
class Person{
    string fname,lname;
    public:
    void get_data()
    {
        cout<<"Enter fname and lname:"<<endl;
        cin>>fname;
        cin>>lname;
    }
    void display1(){
        cout<<"Person Details:\n First Name is:"<<fname<<endl<<"Last Name:"<<lname<<endl;
    }
};
class Employee : public Person{
    public:
    int eno,esal;
    string deg;
    void setEmployee(int x,double y,string z){
        eno=x;
        esal=y;
        deg=z;
    }
    void displayEmployee(){
        cout<<"Employee Details:\n eno."<<eno<<endl<<"esalary:"<<esal<<endl<<"designation:"<<deg<<endl;
    }
};
class Staff: public Employee{
    public:
    int sno,expe;
    void setStaff(int a,int b){
        sno=a;
        expe=b;
    }
    void displaystaff(){
        cout<<"S.no:"<<sno<<endl<<"Experience:"<<expe<<endl;
    }
};
int main(){
    Staff s;
    s.get_data();
    s.setEmployee(1,500000,"HR");
    s.setStaff(5,7);
    s.display1();
    s.displayEmployee();
    s.displaystaff();
    return 0;
}
