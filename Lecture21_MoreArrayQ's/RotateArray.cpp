#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> &arr){
    for(int i: arr)
     cout << i << "  ";
}
void rotateArray(vector<int> &arr,int m){
int n=arr.size();
while(m!=0){
int temp = arr[n-1];

for (int i=n-1;i>0;i--){
arr[i]=arr[i-1];
}
arr[0]=temp;

m--;
}
}

int main(){
vector<int> arr={1,2,3,4,5,6,7,8};

rotateArray(arr,3);
printArray(arr);

    return 0;
}