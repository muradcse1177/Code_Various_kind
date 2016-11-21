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

void push_back(int x)
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

void display()
{
    list *current=new list();
    current=top;
    while(current!=NULL)
    {
        cout<<current->value<<endl;
        current=current->next;
    }
}

void deeeelete(int d)
{
    list *delet=new list();
    list *preview=new list();
    delet=top;
    while(delet->value!=d)
    {
        preview=delet;
        delet=delet->next;
    }
    if(delet->value==top->value)
    top=top->next;
    else if(delet->value==last->value)
    {
        preview->next=NULL;
        last=preview;
    }
    else
    preview->next=delet->next;

}
void insertion(int i,int j)
{
    list *ins=new list();
    ins=top;
    list *po=new list();
    po->value=i;
    list *previous=new list();
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


};

int main()
{
    linklist a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.display();
    a.deeeelete(4);
    cout<<"new:"<<endl;
    a.display();
    cout<<"new:"<<endl;
    a.insertion(12,7);
    a.display();

}
