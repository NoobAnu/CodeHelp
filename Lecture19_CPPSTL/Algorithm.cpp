#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(5);
v.push_back(6);

cout << " Finding 6 using binary search -> " << binary_search(v.begin(),v.end(),6)<<endl;

cout << " Lower bound of 5 "<< lower_bound(v.begin(),v.end(),5) - v.begin() << endl;

cout << " Upper bound of 5 "<< upper_bound(v.begin(),v.end(),5) - v.begin() << endl;


// MIN MAX
int a =3;
int b=5;

cout << "Min of a,b = "<< min(a,b)<<endl;
cout << "Max of a,b = "<< max(a,b)<<endl;
swap(a,b);
cout << "Swapping a b "<< a << b << endl;

string abcd = "abcd";
reverse(abcd.begin(),abcd.end());
cout << " Reverse Function String ABCD  -> "<< abcd << endl;

cout << "Rotate Function " << endl;

rotate(v.begin(),v.begin()+1,v.end());
for (int i:v)
   cout << " " << i;

   cout << endl;

   cout << " Sort Function " << endl;
   sort(v.begin(),v.end());
   for(int i:v)
     cout << i << " ";

     cout << endl;
    return 0;
}