#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
int temp,j,i;
for( i=1;i<n;i++){
    temp = arr[i];
    j=i-1;
    
    while(j>=0){
    if(arr[j]>temp)
        arr[j+1]=arr[j];
    else 
        break;
    j--;
    } 
  arr[j+1]=temp;
}


for(int i=0;i<n;i++){
    cout << arr[i] << endl;
}
}

int main(){
 int arr[6]={1,12,34,3,5,13};

  InsertionSort(arr,5);

    return 0;
}