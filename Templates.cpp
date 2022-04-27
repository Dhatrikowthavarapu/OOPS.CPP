//Bubble sort using template
#include<iostream>

using namespace std;
template <typename T>
void bubble(T a[],int n)
{
    for (int i = 0; i < n - 1; i++)
		for (int j = 0; j< n-i; j++)
			if (a[j] > a[j + 1])
			swap(a[j], a[j + 1]);
    
}
int main()
{
    int a[5]={23,32,2,45,7};
    int n = sizeof(a) / sizeof(a[0]);
    bubble(a,n);
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//MAX
 Code:
#include<iostream>

using namespace std;
template <typename T,typename U>
T max(T a,U b)
{
    return a>b?a:b;
}

int main()
{
    cout<<"Max is:"<<max(5,4);
    cout<<"Max is:"<<max(5,4.6);
    cout<<"Max is:"<<max(5.6,7);
    cout<<"Max is:"<<max(5.5,4.6);
    return 0;
}
 
//TEMPLATE Overloading

#include<iostream>

using namespace std;
template <typename T,typename U>
T add(T a,U b)
{
    cout<<"Not overloaded";
    return a+b;
}
int add(int a,int b)
{
    cout<<"Overloaded";
    return a+b;
}
int main()
{
    cout<<"\nadd is:"<<add(5,4);
    cout<<"\nadd is:"<<add(5,4.6);
    cout<<"\nadd is:"<<add(5.6,7);
    cout<<"\nadd is:"<<add(5.5,4.6);
    return 0;
}
