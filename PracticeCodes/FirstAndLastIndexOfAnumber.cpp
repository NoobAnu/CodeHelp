#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size, int k){
int s=0;
int e=size-1;
int mid= s + (e-s)/2;
int firstIndex;

while(s<=e){
if(k==arr[mid]){
firstIndex=mid;
e=mid-1;
}

if(k>arr[mid]){
    s=mid+1;
}

if(k<arr[mid]){
    e=mid-1;
}

mid = s + (e-s)/2;
}

return firstIndex;

}
int lastOccurence(int arr[],int n, int k){
int s=0;
int e=n-1;
int mid= s + (e-s)/2;
int lastIndex =firstOccurence(arr,n,k);
s=lastIndex+1;

while(s<=e){
if(k==arr[mid]){
lastIndex=mid;
s=mid+1;
}

if(k>arr[mid]){
    s=mid+1;
}

if(k<arr[mid]){
    e=mid-1;
}

mid = s + (e-s)/2;
}

return lastIndex;

}





int main(){


int arr[5]={12,13,13,13,13};

int firstIndex = firstOccurence(arr,5,13);
int lastIndex = lastOccurence(arr,5,13);
cout << firstIndex << endl;
cout << lastIndex << endl;

    return 0;
}