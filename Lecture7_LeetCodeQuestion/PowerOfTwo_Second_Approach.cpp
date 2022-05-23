#include<iostream>
#include<climits>
using namespace std;

 bool isPowerOfTwo(int n) {
        
        int count =0;
        while(n!=0){

            if(n&1==1)
                count++;

             n=n>>1;

             if(count>1)
                return false;   


        }
        
      
        return true;
    }

    int main(){
        int n;
        cin >> n;
        
        if(isPowerOfTwo(n)){
            cout << n << " is power of Two."<< endl;
        }
        else
             cout << n << " is not power of Two."<< endl;

        return 0;
    }