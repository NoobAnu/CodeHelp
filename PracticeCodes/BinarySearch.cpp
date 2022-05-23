#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
int start =0;
int end = size-1;
int  mid=(start + (end-start)/2) ; // Chalaki

while (start<=end)
{
   if(arr[mid]==key)
      return mid;

//right wale part me jana hai
   if(key>arr[mid]){
start=mid+1;
   }   

   if(key<arr[mid]){
end=mid-1;
   }   

   mid=(start + (end-start)/2) ; // Chalaki
}


    return -1;
}


int main(){
  int even[6] = {1,3,5,8,9,15};
  int odd[5]= {2, 4,6,8,9};

int index = binarySearch(even,6,9);
int index2 = binarySearch(odd,5,16);
cout<< index<< endl;
cout << index2 << endl;
    return 0;
}