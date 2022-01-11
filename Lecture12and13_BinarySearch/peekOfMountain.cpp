#include<iostream>
using namespace std;

int peek(int a[],int n){

 int s=0,e=n-1, mid =(s+e)/2;

 while(s<e)  {

if(a[mid]<a[mid+1])
    s=mid+1;


else
  e=mid;

 mid = (s+e)/2;
 }

return e;

}


int main(){

int n;
cout << "Enter number of Elements to enter in array" << endl;

cin >> n;

int a[n];
cout << "Enter Elements of array" << endl;

for(int i=0;i<n;i++){

   cin >> a[i];

}

int ans = peek(a,n);
   cout << " Peek is present at index  " << ans << "  and number is  " << a[ans]<< endl;

    return 0;

}