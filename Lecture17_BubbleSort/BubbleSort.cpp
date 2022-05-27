#include<iostream>

using namespace std;

void BubbleSort(int arr[],int n){

for(int i=0;i<n-1;i++){

bool swapped =false;

for (int j=0;j<n-i-1;j++){
if(arr[j+1]<arr[j]){
swap(arr[j],arr[j+1]);
swapped=true;
}
}
if(swapped==false)
break;
}

for(int i=0;i<n;i++){
    cout << arr[i] << endl;
}
}

int main(){
 int arr[5]={12,34,3,5,13};

  BubbleSort(arr,5);

    return 0;
}