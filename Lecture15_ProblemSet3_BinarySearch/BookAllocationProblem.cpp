#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
int studentCount =1;
int pagesum =0;

for(int i=0;i<n;i++){
  if(pagesum+arr[i]<=mid){
      pagesum += arr[i];
  }

  else{
      studentCount++;
      if(studentCount>m || arr[i] > mid)
         return false;

      pagesum = arr[i];   


  }
 if(studentCount>m)
    return false;

}

    return true;
}

int AllocateBooks(int arr[],int n, int m){
    int s=0,sum=0;
    int e,ans=-1;
    
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    e=sum;
    int mid = s +(e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e = mid-1;
        }

        else
          s=mid+1;
        mid = s + (e-s)/2;
    }
    return ans;

}


int main(){
 int arr[5] ={10,20,30,40,50};
 int minimumPages = AllocateBooks(arr,5,2);
 cout << minimumPages << endl;

    return 0;
}

