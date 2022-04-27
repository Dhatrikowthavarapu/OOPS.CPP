//Sorting vector using int
#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    int n;
    vector <int> a;
    a.push_back(50);
    a.push_back(7);
    a.push_back(45);
    a.push_back(5);
    a.push_back(14);
    a.push_back(11);
    a.push_back(27);
    cout<<"Array:"<<endl;
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i <<" ";
	sort(a.begin(), a.end());
    cout<<"\nSorted Array:"<<endl;
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i <<" ";
	cout<<endl<<"Array in Reverse Sorted order:"<<endl;
	for (auto i = a.rbegin(); i != a.rend(); ++i)
		cout << *i <<" ";
    return 0;
}
======================================
//Sorting vector using str
#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    int n;
    vector <string> a;
    a.push_back("T");
    a.push_back("O");
    a.push_back("D");
    a.push_back("A");
    a.push_back("M");
    a.push_back("B");
    a.push_back("Z");
    cout<<"Array:"<<endl;
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i <<" ";
	sort(a.begin(), a.end());
    cout<<"\nSorted Array:"<<endl;
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i <<" ";
	cout<<endl<<"Array in Reverse Sorted order:"<<endl;
	for (auto i = a.rbegin(); i != a.rend(); ++i)
		cout << *i <<" ";
    return 0;
}


//Linear search using vector
#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    int n;
    int found=0;
    vector <int> a;
    a.push_back(50);
    a.push_back(7);
    a.push_back(45);
    a.push_back(5);
    a.push_back(14);
    a.push_back(11);
    a.push_back(27);
    cout<<"Enter key to search:";
    cin>>n;
    for(auto i=a.begin();i<a.end();++i)
    {
        if (*i==n)
        {
           found++;
           cout<<n<<" is found ";
        }
    }
    if(found==0)
    {
        cout<<n<<" is not found";
    }
    return 0;
}
=============================
//Linear search using Deque(int)
#include<iostream>
#include<algorithm>
using namespace std;
#include<deque>
int main()
{
    int n;
    int found=0;
    deque <int> a;
    a.push_front(50);
    a.push_front(7);
    a.push_front(45);
    a.push_front(5);
    a.push_front(14);
    a.push_front(11);
    a.push_front(27);
    cout<<"Enter key to search:";
    cin>>n;
    for(auto i=a.begin();i<a.end();++i)
    {
        if (*i==n)
        {
           found++;
           cout<<n<<" is found ";
        }
    }
    if(found==0)
    {
        cout<<n<<" is not found";
    }
    return 0;
}
