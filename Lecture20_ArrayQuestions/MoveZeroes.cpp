#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v){
    for(int i:v)
      cout << i << " ";
}

void moveZeroes(vector<int> &v, int n){
int s=0,e=0;

while(e<n){
if(v[e]!=0 && v[s]==0 && s<e)
 swap(v[e],v[s]);
 
while(v[s]!=0 && s<e)
s++;

e++;  
}
}

int main(){
vector<int> v = { 1,0,3,2,0,6,7,0,0};

moveZeroes(v,9);
printVector(v);
    return 0;
}