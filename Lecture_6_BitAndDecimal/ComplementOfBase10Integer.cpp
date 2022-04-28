#include<iostream>

using namespace std;

int main(){

int n,var,mask=0;
cin >> n;
var =n;
// Edge case
if(n==0)
    return 1;
    
while(n!=0){
    n=(n>>1);
    mask =((mask<<1)|1);
}


cout << ((~var)&mask) <<endl;



    return 0;
}