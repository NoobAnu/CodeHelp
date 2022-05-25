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

int main(){

    int arr[5]={7,2,3,4,5};

    int pivot=arr[findPivot(arr,5)];
    cout<< "pivot is = "<< pivot<<endl;

    return 0;
}