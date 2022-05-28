#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v){
    for(int i:v)
      cout << i << " ";
}

void moveZeroes(vector<int> &v, int n){
int i=0,j=0;

for(int j=0;j<n;j++){

if(v[j]!=0){
    swap(v[j],v[i]);
    i++;
}
}
}

int main(){
vector<int> v = { 1,0,3,2,0,6,7,0,0};

moveZeroes(v,9);
printVector(v);
    return 0;
}