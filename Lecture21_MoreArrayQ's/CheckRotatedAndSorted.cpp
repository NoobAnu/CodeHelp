#include<iostream>
#include<vector>
using namespace std;

bool checkArray(vector<int> v){
int count =0;
int n=v.size();

for(int i=1;i<n;i++){

 if(v[i]<v[i-1])    
   count++;
}
if(v[n-1]>v[0])
    count++;

if(count <= 1)  // For non-decreasing order array.
  return true;


    return false;
    
}

int main(){
vector<int> v ={0,6,1,2,3,4};

if(checkArray(v)==true)
cout << " Array is Sorted as well as Rotated "<<endl;

else 
cout << " Array is not Sorted-Rotated "<<endl;

return 0;
}