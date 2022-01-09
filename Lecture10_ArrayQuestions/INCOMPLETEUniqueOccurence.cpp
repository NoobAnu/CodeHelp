#include<iostream>
using namespace std;
void sortArray(int a[],int n){


}

bool isUnique (int arr[],int size){
    int occurence[size]={0},count=0;
    int start=0,end=1;
     sortArray(arr,size);
     
      while(end=size-1){
       count =0;
       while(arr[start]==arr[end]){ 
           end++;
           count++;
       }
     

    }


    return true;
}



int main(){

    int n,ans;
    cin >> n;
    int arr[n];
   
    for(int i=0;i<n;i++){
       
       cin >> arr[i];

    }
 
   if(isUnique(arr,n))
    cout << "Unique Occurence for all elements " << endl;
   
   else 
     cout << "Duplicate number of occurences Present in the array" << endl;
}