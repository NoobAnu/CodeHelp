#include<iostream>
using namespace std;


int main(){

    int n,ans;
    cin >> n;
    int arr[n];
   
    for(int i=0;i<n;i++){
       
       cin >> arr[i];

    }
     ans = arr[0];
    for(int i=1;i<n;i++){
       
        ans = ans ^ arr[i];

    }
    cout << "Unique NUmber is  " << ans << endl;

}