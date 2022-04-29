#include<iostream>
#include<climits>
using namespace std;

int findMax(int arr[], int n){
    int max = INT_MIN;

for (int i=0;i<n;i++){

    if(max<arr[i]){
        max=arr[i];
    }
}

    return max;
}

int findMin(int arr[], int n){
    int min = INT_MAX;

for (int i=0;i<n;i++){

    if(min>arr[i]){
        min=arr[i];
    }
}

    return min;
}
int main(){

int n;
cin >> n;
int arr[n];

for(int i=0;i< n;i++){

cin >> arr[i];

}

int max = findMax(arr,n);

int min = findMin(arr,n);

cout << "Maximum Element is  " << max << endl;

cout << "Minimum Element is  " << min << endl;

    return 0;
}