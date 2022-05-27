#include<iostream>

using namespace std;

void selectionSort(int arr[],int n){

for(int i=0;i<n-1;i++){
int minIndex=i;

for (int j=i;j<n;j++){
if(arr[minIndex]>arr[j])
minIndex=j;
}

swap(arr[minIndex],arr[i]);

}

for(int i=0;i<n;i++){
    cout << arr[i] << endl;
}
}

int main(){
 int arr[5]={12,34,3,5,13};

  selectionSort(arr,5);

    return 0;
}