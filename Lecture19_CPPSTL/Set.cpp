#include<iostream>
#include<set>
using namespace std;
int main(){

set<int> s;

s.insert(1);
s.insert(2);
s.insert(0);
s.insert(2);
s.insert(4);
s.insert(5);
s.insert(5);
s.insert(3);

for(int i: s)
  cout << " " << i;

  cout <<endl;

  set<int> :: iterator it = s.begin();
it++;

s.erase(it);
for(int i: s)
  cout << " " << i;

  cout <<endl;

  cout << " Count Function Is 5 present or not ? " << s.count(5)<<endl;
  
  //iterator , find function
  set<int> :: iterator itr = s.find(5);
  cout << *itr << endl;

    return 0;
}