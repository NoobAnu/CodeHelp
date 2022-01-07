#include<iostream>
using namespace std;

bool isElement(int arr[],int size, int key){

for(int i=0;i<size;i++){
if(arr[i]==key)
   return true;
}

    return false;
}

int main(){
int n,key;
cout << "No. of elements in Array"<< endl;

cin >> n;

int arr[n];
for(int i=0;i<n;i++){
cin >> arr[i];
}
cout << "Which element to search?"<< endl;

cin >> key;

if(isElement(arr,n,key)){
cout << "Element is present in array"<<endl;
}

else
  cout<< "Element is not present in array"<< endl;


}