#include<iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossible(int arr[],int n,int m, int mid){
int totalTime;
int dishCount=0;

for(int i=0;i<n;i++){
int iteration=1;
totalTime=arr[i];

while(totalTime<=mid){
dishCount++;
iteration++;
totalTime = totalTime + iteration * arr[i];
}
// cout << "--------Checking For "<< arr[i] << " Totaltime " << totalTime << "  Dishcount " << dishCount << endl;

if(dishCount>=m)
  return true;
}

return false;

}
int findTime(int arr [],int n, int m){
sort(arr, arr + n);
int s=0;
int ans =-1;
int e = arr[0]*(m*(m+1)/2);
int mid = s+(e-s)/2;

while (s<=e)
{   // cout << "start " << s << " mid " << mid << " end "<< e << endl;
    if(isPossible(arr,n,m,mid)){
    ans = mid;
    e=mid-1;
}

else{
    s=mid+1;
}

mid = s+(e-s)/2;
}
    return ans;
}

int main(){
    int arr[4]={1,2,3,4};
   cout << findTime(arr,4,11)<<endl;
    return 0;
}