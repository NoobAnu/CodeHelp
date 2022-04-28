#include<iostream>
#include<climits>
using namespace std;

 int reverse(int x) {
        int ans=0;
        
     
        
        while(x!=0)
        {
            if ((ans >INT_MAX/10) || (ans< INT_MIN/10)  ){
                return 0;
            }
            
            ans = ans*10 + x%10;
            x=x/10;
        }
        
        return ans;
        
    }

    int main(){

        int x;
        cin >> x;
        cout << reverse(x)<< endl;
        return 0;
    }