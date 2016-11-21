#include<iostream>
using namespace std;

struct list{
int value;
list *next;
};

class linklist{
public:
list *top;
list *last;
list *nuton;

linklist()
{
    top=last=nuton=NULL;
}
void push_back(int x)
{
    nuton=new list ();
    nuton->value=x;
    nuton->next = NULL;
    if(top==NULL)
    top=nuton;
    else
        last->next=nuton;
    last=nuton;
}
void bookword(int m)
{
    //list *preview=new list ();
    list *back=new list();
    back->value=m;
    back->next=NULL;
    if(last==NULL)
    last=back;
    else
    {
        top=back;
        top->next=last;
    }
     last=back;
}

void display()
{
    list *current=new list();
    current=top;
    while(current->next!=NULL)
    {
        cout<<current->value<<endl;
        current=current->next;
    }
    cout<<current->value<<endl;
}

};
int main()
{
    linklist a;
    int p;
    //a.push_back(1);
    while(cin)
    {
        cin>>p;
        a.bookword(p);
    }
    a.display();
    return 0;
}
