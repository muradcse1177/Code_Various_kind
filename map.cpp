#include <iostream>
#include <map>
using namespace std;

int main ()
{
  map<int,int> mymap;
  map<int,int>::iterator it;
  int p=50;
  mymap[7]=20;
  mymap[5]=30;
  mymap[3]=40;

  cout << "elements in mymap:" << endl;
  cout << "a => " << mymap.find(20)->first << endl;
  cout << "b => " << mymap.find(30)->first << endl;

  return 0;
}
