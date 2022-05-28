#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    // d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    
    for(int i: d)
       cout << i << " ";

    cout << " Element at index 0 " << d.at(0)<<endl;
    cout << " Element at the front " << d.front()<<endl;
    cout << " Element at the back " << d.back() << endl;
    cout << " Remove element from front "  << endl;
    d.pop_front();
    cout << " Remove element from the back "  << endl;   
    d.pop_back();
    for(int i:d)
      cout << i << " ";


    cout << endl;
   
    d.push_back(3);
     d.push_back(4);
      d.push_back(5);
    cout << " Before erase" << endl;
      for(int i:d)
      cout << i << " ";

      cout << endl;

      cout << " After Erase " << endl;
    d.erase(d.begin(),d.begin()+1);
     for(int i:d)
      cout << i << " ";

    return 0;
}