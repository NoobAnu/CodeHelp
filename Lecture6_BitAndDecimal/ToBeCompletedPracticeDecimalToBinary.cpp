#include<iostream>
#include<math.h>
using namespace std;

long long int twosComplement(int n){
    int bit,count=0,i=0;
    long long int ans=0;

    while(n!=0){
        bit = n%10;
        if(bit==1)
          count++;

        if (count>1){
            bit = (bit^1);
        }  

        ans=bit* pow(10,i)+ans;
        i++;
        n=n>>1;
    }

    return ans;
}

long long int positiveBinary (int n){

    int i=0;
    long long int ans=0;
     while (n!=0){
        
        ans =ans + (n&1)* pow(10,i);
        i++;
        n=n>>1;
    }
    return ans;
}

int main(){

    int n;
    long long int ans;
    cin >> n;

    if(n>0)
        ans = positiveBinary(n);

    else{

        ans = positiveBinary(n);
        ans = twosComplement(ans);
    }
    
    cout << ans << endl;

    return 0;
}