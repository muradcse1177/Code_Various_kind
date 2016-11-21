#include<iostream>
using namespace std;

struct list{
int a,b,c;
list *next;
list *previous;
};

class linklist{
public:
list *top=new list;
list *last=new list;
list *nuton=new list;

linklist()
{
    top=last=nuton=NULL;
}
void push_back(int,int);
void display();
};
void linklist::push_back(int x,int y)
{
    nuton->a=x;
    nuton->b=y;
    nuton->c=x+y;
    if (top==NULL)
    {
        top=nuton;
        top->previous=NULL;
        top->next=last;
    }
}
