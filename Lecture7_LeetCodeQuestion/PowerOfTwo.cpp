#include<iostream>
using namespace std;
int main(){

int n;
cin >>n;

  int i=0;
  
while(n){
    
    if(n&1==1)
       i++;
    
    if(i>1)
        break;

    n=n>>1;   
}
if(i==1)
   cout<< "Power of Two"<<endl;

 else
   cout<< "Not Power of Two";  

return 0;
}