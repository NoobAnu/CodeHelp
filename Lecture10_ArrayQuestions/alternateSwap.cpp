#include<iostream>
using namespace std;

void swapArray(int arr[], int n){

for(int i=1;i<n;i+=2){
   if(i<n){
       swap(arr[i],arr[i-1]);
      
   }
   
}

}

void printArray(int arr[],int n){
    
  for(int i=0;i<n;i++){
  cout << arr[i] << " ";
}
cout << endl;
}

int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
  cin >> arr[i];
}
swapArray(arr,n);
printArray(arr,n);
    return 0;
}