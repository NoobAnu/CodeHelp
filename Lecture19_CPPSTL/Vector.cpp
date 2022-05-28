#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5,1);

    cout << " Finding Capacity " << v.capacity()<< endl;
    cout << " Finding Size of the vector " << v.size() << endl;
    cout << " Find First Element of the vector " << v.front()<< endl;
    cout << " Find last element of the vecto " << v.back()<< endl;
    cout << " Add 5 in the last " <<endl;
    v.push_back(5);
    for(int i:v)
      cout << " " << i;

    cout << endl;

    cout << " Remove 5 from the last " <<endl;
     v.pop_back();

for(int i:v)
      cout << " " << i;

      cout << " Copy Vector to new Vector "<<endl;

      vector<int> a(v);
      cout << " Print new vector a "<<endl;
      for(int i:a)
      cout << " " << i;
cout <<endl;
      cout << " Clearing "<<endl;
      v.clear();

      for(int i:v)
      cout << " " << i;
     

    return 0;
}