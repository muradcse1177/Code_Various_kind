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
list *New;
linklist()
{
    top=last=New=NULL;
}

void display();
void push_back(int);
void deeeelete(int);
void insertion(int,int);
};
void linklist::push_back(int x)
{
    New=new list();
    New->value=x;
    New->next=NULL;

    if(top==NULL)
    top=New;
    else
    last->next=New;

    last=New;
}

void linklist::deeeelete(int d)
{
    list *delet=new list;
    list *preview=new list;
    list *ppt=new list;
    delet=top;
    while(delet->value!=d)
    {
        preview=delet;
        delet=delet->next;
    }
    if(top->value==d)

    {
        ppt=top;
        top=top->next;
        delete(ppt);
    }

    else if(delet->value==last->value)
    {
        preview->next=NULL;
        delete(last);
        last=preview;
    }
    else

    {
        preview->next=delet->next;
        delete(delet);
    }

}
void linklist::display()
{
    list *current=new list();
    current=top;
    while(current!=NULL)
    {
        cout<<current->value<<endl;
        current=current->next;
    }
}
void linklist::insertion(int i,int j)
{
    list *ins=new list;
    ins=top;
    list *po=new list;
    po->value=i;
    list *previous=new list;
    while(ins->value!=j)
    {
        previous=ins;
        ins=ins->next;
    }
    if(top->value==j)
    {
     po->next=top;
     top=po;
    }
    else
    {
    previous->next=po;
    po->next=ins;
    }

}

int main()
{   int b,c,d,e;
    linklist a;
    int p;
    cout<<"Total number of element:";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>p;
        a.push_back(p);
    }
    a.display();
    cout<<"delete:";
    cin>>e;
    a.deeeelete(e);
    a.display();
    cout<<"insertion:(new value) (place)"<<endl;
    cin>>c>>d;
    a.insertion(c,d);
    a.display();

    return 0;
}
