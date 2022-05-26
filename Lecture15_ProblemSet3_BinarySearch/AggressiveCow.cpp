#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n, int cow, int mid){
int cowCount=1;
int lastPos=arr[0];

for(int i=0;i<n;i++){

if(arr[i]-lastPos>=mid){
cowCount++;

if (cowCount==cow)
{
return true;
}

lastPos = arr[i];
}

}


    return false;
}

int largestDiff(int arr[],int n,int cow){
  sort(arr, arr + n);   
 int s=0;
 int ans =-1;
 int maxi=0;

 for(int i=0;i<n;i++){
     if(arr[i]>maxi)
        maxi = arr[i];
 }
 int e =maxi;
 int mid = s+(e-s)/2;

 while(s<=e){
  
  if(isPossible(arr,n,cow,mid)){
      ans =mid;
      s = mid + 1;
      //We have to check in right wala part for larger values.
  }

else
  e = mid -1;

     mid = s+(e-s)/2;
 }

    return ans;
}

int main(){
int arr[5]={1,2,3,4,9};

cout << largestDiff(arr,5,2) << endl;

    return 0;
}