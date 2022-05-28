#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;

void printArr(vector<int> &v){
     for(int i:v)
      cout << " " << i;
}

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int s=m+1;
    int e=arr.size()-1;
    
    for(int i=0;s<=e;i++,s++,e--){
        swap(arr[s],arr[e]);
    }
    printArr(arr);
   
}



int main(){

vector<int> arr={1,2,3,4,5,6,7};

int m=3;
reverseArray(arr,m);

    return 0;
}