#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>mystack;
    int p=0;
    for(int i=0;i<10;i++)
    {
        mystack.push(i);
    }
    int size=mystack.size();
    cout<<"size:"<<size<<endl;
    //mystack.top()= mystack.top()-90;
    while(!mystack.empty())
    {
         p=mystack.top();
        cout<<p<<" ";
        mystack.pop();
    }

    return 0;
}
