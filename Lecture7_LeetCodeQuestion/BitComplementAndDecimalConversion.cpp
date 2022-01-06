#include<iostream>
using namespace std;
int main(){

int n,num,mask=0,ans;
cin>> num;
n=num;

if(n==0){
    cout<< 1;
    return 0;
}
 
while(n)
{   n=n>>1;
    mask=(mask<<1)|1;   
}

  ans = (~num)&mask;  


cout<< ans;
return 0;
}