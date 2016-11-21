#include<iostream>
#include<stdio.h>
#include<cctype>
using namespace std;
int stack[200];
int front=0,rear=0;
void push_back(int item)
{
    if((front==1&&rear==200)||(front==rear+1))
    cout<<"Overflow\n";
    if(front==NULL)
    {
        front=1;
        rear=1;
    }
    else if(rear==200)
    rear=1;
    else
    rear++;
    stack[rear]=item;
}
void display()
{
    cout<<"display:";
    for(int i=1;i<=rear;i++)
    cout<<stack[i]<<" ";
    cout<<endl;
}
void pop()
{
    int item;
    if(rear==0)
    cout<<"underflow";
    item=stack[rear];
    if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else if(rear==200)
    rear=1;
    else
    rear--;

}

int main()
{
    int m,n,a;
    cout<<"1-For push:\n2-For pop\n3-Display\n";
    while(1)
    {

    cin>>a;
    if(a==1)
    {
        cin>>m;
        push_back(m);
    }
    if(a==2)
    pop();
    if(a==3)
    display();
    }

return 0;
}
