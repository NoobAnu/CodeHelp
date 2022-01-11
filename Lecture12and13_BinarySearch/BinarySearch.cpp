//
#include<iostream>
using namespace std;

int binarySearch(int a[],int n, int key){

int start=0,end=n-1,mid=(start+end)/2;

while(start<=end){

if(a[mid]==key)
   return mid;

if(a[mid]<key){
    start = mid+1;
}

else
   end = mid-1;

mid = (start+end)/2;   


}


return -1;
}

int main(){

int n,key;
cout << "Enter number of Elements to enter in array" << endl;

cin >> n;
int a[n];
cout << "Enter Elements of array" << endl;

for(int i=0;i<n;i++){

   cin >> a[i];

}
cout << "Enter key to find in array" << endl;
cin >> key;
int index = binarySearch(a,n,key);
if(index !=-1)
   cout << " Key is present at index  " << index << endl;
else
   cout << "Key is not present in the given Array" << endl;  
    return 0;

}