#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;
    list<int> s(5,100);

    for(int i:s)
       cout << i << " ";

cout << endl;
      l.push_back(1);
      l.push_front(5);

        for(int i:l)
       cout << i << " ";

       cout << endl;

l.erase(l.begin());

cout << "After Erase " << endl;
   for(int i:l)
       cout << i << " ";
cout << endl;

cout << "Size of List " << l.size() << endl;
    return 0;
}