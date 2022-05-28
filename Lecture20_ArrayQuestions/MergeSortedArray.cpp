#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr){
   
   for(int i:arr)
    cout << " " << i;

}

void mergeArray(vector<int> &arr1,int m,vector<int> &arr2,int n,vector<int> &arr3){

int i=0,j=0,k=0;

while(i<m && j<n)
{
if(arr1[i]<arr2[j])
     arr3[k++]=arr1[i++];

else if(arr1[i]>=arr2[j])
     arr3[k++]=arr2[j++];
}

while(i<m)
    arr3[k++]=arr1[i++];

while(j<n)
    arr3[k++]=arr2[j++];
    

}

int main(){

vector<int> arr1 = {1,3,5,7,9};
vector<int> arr2 = {2,4,6};
vector<int> arr3 (8,0);

mergeArray(arr1,5,arr2,3,arr3);
printArray(arr3);
    return 0;
}