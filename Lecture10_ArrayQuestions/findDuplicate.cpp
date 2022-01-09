#include<iostream>
using namespace std;

void find(int arr[],int n){
    int ans=0;
    for(int i=0;i<n; i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<n; i++){
        ans = ans ^ i;
    }
    cout << ans << endl;
}


int main(){
int n;
cin >> n;
int arr[n];

for(int i=0;i<n;i++){
cin >> arr[i];
}

find(arr,n);

return 0;
}