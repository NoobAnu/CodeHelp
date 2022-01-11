//This solution can be optimised and question can be improved by adding only unique solutions will be considered not redundant value 
//for example check for  1 2 3 1 2 3 and sum =6 => Several redundant values are there

#include<iostream>
using namespace std;

int main(){

int n,sum;
cout << "enter no. of elements" << endl;
cin >> n ;
int a[n];

cout << "enter elements" << endl;
for(int i=0;i<n;i++){
   cin >> a[i];
}

cout << "Sum of numbers?" << endl;
cin >> sum;

for(int i=0;i<n;i++){

if (a[i]>sum){
    break;
}

for (int j=i+1; j<n; j++){

if(a[i]+a[j]>sum)
   break;

for(int k=j+1;k<n;k++){
   
   if(a[i]+a[j]+a[k] > sum)
      break;

   else if(a[i]+a[j]+a[k]==sum){
       cout << a[i] <<" " << a[j] << " " << a[k] << " " << endl;
   }   


}


}

}

return 0;
}