#include<iostream>
using namespace std;

int findRoot(long long int N){
 int s=0;
 int e=N;
long long int mid = s+ (e-s)/2;
long long int ans,square;
   
while (s<=e)
{  
    square = mid*mid;
    if(square == N)
    return mid;

    if (square>N)
      e=mid-1;

    if(square<N){
        s=mid+1;
        ans = mid;
    }
      
    mid = s+(e-s)/2;    

}

return ans;

}


int main(){

cout << findRoot(25) << endl;

    return 0;
}