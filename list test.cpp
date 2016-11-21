#include<iostream>
#include<list>
#include<string>
#include<cctype>
using namespace std;
bool compair_nocase(string first,string second)
{
    unsigned int i=0;
    while((i<first.length())&&(i<second.length()))
    {
        if(tolower(first[i]<tolower(second[i])))
        return true;
        else if (tolower(first[i]>tolower(second[i])))
        return false;
        i++;
    }
    if(first.length()>second.length())
    return true;
    else
    return false;
}

int main()
{

    list<string>mylist;
    list<string>::iterator it;
    mylist.push_back("Dada");
    mylist.push_back("Baba");
    mylist.push_back("Kaka");
    mylist.push_back("google");
    mylist.sort();
    for(it=mylist.begin();it!=mylist.end();it++)
    cout<<*it<<endl;
    mylist.sort(compair_nocase);
    cout<<"now:\n";
    for(it=mylist.begin();it!=mylist.end();it++)
    cout<<*it<<endl;

    cout<<endl;

    return 0;
}
