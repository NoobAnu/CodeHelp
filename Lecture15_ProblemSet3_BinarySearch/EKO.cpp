#include<iostream>
#include <bits/stdc++.h>
#define int unsigned long long int 
// unsigned int for SPOJ QUESTION CONSTRAINT

using namespace std;

int  totalHeight(int arr[],int n,int mid){

int sumOfHeight =0;

for(int i=0;i<n;i++){
  if(arr[i]>mid){
    sumOfHeight= sumOfHeight + (arr[i]-mid);
  }

}

    return sumOfHeight;
}

int AllocateSawHeight(int arr[],int n, int h){
    sort(arr,arr+n);
    int s=0,height=0,ans=-1;
    int e=arr[n-1];
    int mid = s +(e-s)/2;
    
    
    while(s<=e){
        height=totalHeight(arr,n,mid);
        //cout<< height <<endl;
        if(height>=h){  
            ans=mid;
            s=mid+1;
        }
          
        if(height < h)
           e= mid-1;
         
        mid = s + (e-s)/2;
    }
    return ans;

}


int32_t main(){
int n,h;
cin >> n >> h;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>> arr[i];
 }
 int woodLength = AllocateSawHeight(arr,n,h);
 cout << woodLength << endl;

    return 0;
}

