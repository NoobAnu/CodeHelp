#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
     
  int count=0;
        while (n){
            
            if(n&1)
                count++;
            
            n=n>>1;
            
        }
        
        cout<< count;

}
// Finding number of 1 bit sin given sequence of 32 bits unsigned.
