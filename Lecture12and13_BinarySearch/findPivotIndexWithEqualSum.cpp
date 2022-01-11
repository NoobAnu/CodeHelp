//
#include<iostream>
using namespace std;

int pivot(int a[],int n){

int mid=(n-1)/2,sum1,sum2;

while(mid !=0 && mid != n-1){
sum1=0; sum2=0;

for (int i=0;i<mid;i++){
 sum1 = sum1+ a[i];
} 

for (int i=mid+1;i<n;i++){
 sum2 =sum2 + a[i];
} 

if(sum1==sum2)
   return mid;

else if(sum1 > sum2)
     mid= mid-1;

else 
   mid = mid + 1;

}
 sum1 = 0,sum2=0;
for (int i=0;i<n-1;i++){
 sum1 =sum1 + a[i];
} 
for (int i=1;i<n;i++){
 sum2 =sum2 + a[i];
} 

if(sum1==0)
   return n-1;

if(sum2 == 0)
   return 0;   

return -1;
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

int index = pivot(a,n);

if(index != -1)
cout << " Pivot is present at index  " << index << endl;

else
  cout << " No pivot is available" << endl;
    return 0;

}