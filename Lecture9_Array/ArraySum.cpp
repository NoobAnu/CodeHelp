#include<iostream>
using namespace std;

void sumOfArray(int arr[], int size){
int sum = 0;
for(int i=0;i < size;i++){

    sum = sum+arr[i];
}

cout << "Sum of all element is  "<< sum << endl;

}

int main(){
int arr[100];

cout<< "Input number of elements you want to sum (max 100)"<<endl;
int n;
cin >> n;

for(int i=0;i<n;i++){
cin>> arr[i];
}
sumOfArray(arr,n);

    return 0;
}