#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){

int start = 0, end= size-1, mid;

while(start<=end){

mid=arr[start];
arr[start]=arr[end];
arr[end]=mid;
start++;
end--;

} 
}

int main(){

int n;
cout<< "Enter number of Elements in array"<< endl;
cin >> n;

int arr[n];
cout << "Enter " << n << " Elements" << endl;

for(int i=0;i<n;i++){
cin >> arr[i];

}
reverseArray(arr,n);

cout<< "Reversed Array is  "<< endl;

for(int i=0;i<n;i++){
cout  << arr[i] << " ";
}
cout << endl;

}