#include<iostream>
using namespace std;

int findPivot(int arr[],int size){
int s=0;
int e=size-1;
int mid = s + (e-s)/2;
while (s<e)
{
    if(arr[mid]>=arr[0])
       s=mid+1;

    else
      e=mid;  

  mid = s + (e-s)/2;     
}

    return mid;
}

int findTarget(int arr[],int n,int key){
    int pivotIndex= findPivot(arr,n);
    int keyIndex=-1;
    int s=0;
    int e= n-1;
    int mid= s+ (e-s)/2;
    if(key>= arr[pivotIndex] && key<= arr[n-1]){
       s=pivotIndex;
    }

    else
      e=pivotIndex-1;

      mid= s+ (e-s)/2;
      while(s<=e){
     
     if(key==arr[mid]){
         return mid;
     }

     if(key>arr[mid])
         s=mid+1;

     if(key<arr[mid])
       e=mid-1;

       mid=s+(e-s)/2;    

      }
return keyIndex;

}

int main(){

    int arr[5]={10,1,2,3,4};

    int searchIndex=findTarget(arr,5,10);

    if(searchIndex>=0)
      cout<< "element is present at  = "<< searchIndex<<endl;

    else
      cout<< "Element is not present in the array.  "<< endl;  

    return 0;
}