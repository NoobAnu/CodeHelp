#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,invert;
    cin >> n;
    int ans=0,bit=0,i=0;
   
   if (n>=0){
   cout << "Number is non-negative Running First Snippet of the code. Binary Form=>  "<< endl;
    while (n)
    {  bit = n&1;
       ans = ans+(bit*pow(10,i));
       n=n>>1;
       i++;
    }
    cout << ans << endl;
   }

   if (n<0){
   cout << "Number is Negative Running second Snippet of the code. Binary Form=>  "<< endl;
    n=n*(-1);
    int num=32;

    // Still Incomplete.
    while (num)
    {  bit = n&1;
       if(bit==1)
         bit =0;

        else
          bit=1;
        
     
     cout<< bit;
       n=n>>1;
       num--;
       i++;
    }
    
   }
    


    return 0;
}