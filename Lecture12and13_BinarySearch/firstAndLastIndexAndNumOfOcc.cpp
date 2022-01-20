//
#include<iostream>
using namespace std;

int firstOcc(int a[],int n, int key){

int start=0,ans=-1,end=n-1,mid=(start+end)/2;

while(start<=end){

if(a[mid]==key){
   ans=mid;
   end=mid-1;
}

else if(a[mid]<key){
    start = mid+1;
}

else if(key< a[mid]){
   end = mid-1;
}

mid = (start+end)/2;   


}


return ans;
}
int lastOcc(int a[],int n, int key){

int start=0,ans=-1,end=n-1,mid=(start+end)/2;

while(start<=end){

if(a[mid]==key){
   ans= mid;
   start=mid+1;
}
 else if(a[mid]<key){
    start = mid+1;
}

else if(key< a[mid]){
   end = mid-1;
}

mid = (start+end)/2;   


}
return ans;
}
int main(){

int n,key;
cout << "Enter number of Elements to enter in array" << endl;

cin >> n;
int a[n];
cout << "Enter Elements of array" << endl;

for(int i=0;i<n;i++){

   cin >> a[i];

}
cout << "Enter key to find in array" << endl;
cin >> key;

 int first =firstOcc(a,n,key);
 int last = lastOcc(a,n,key);

 cout << first << " " << last << endl;
 cout << "Total number of Occurence of " << key << " in the array is " << last-first+1 << endl;
 return 0;

}