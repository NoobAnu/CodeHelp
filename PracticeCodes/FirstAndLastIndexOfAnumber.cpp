#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size, int key){
int s=0;
int e=size-1;
int mid= s + (e-s)/2;
int firstOccurence;

while(s<=e){
if(key==arr[mid]){
firstOccurence=mid;
e=mid-1;
}

if(key>arr[mid]){
    s=mid+1;
}

if(key<arr[mid]){
    e=mid-1;
}


}

return firstOccurence;

}





int main(){


int arr[5]={12,13,13,23,45};

int firstIndex = firstOccurence(arr,5,13);

cout << firstIndex;

    return 0;
}