//STACK PROBLEM push,pop,empty and top functions.

#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(5);
    stack.push(7);
    stack.push(9);
    stack.push(14);
    stack.push(51);
    stack.pop();
    stack.pop();
    while(!stack.empty())
    {
        cout<<stack.top();
        stack.pop();
    }
    return 0;
}
