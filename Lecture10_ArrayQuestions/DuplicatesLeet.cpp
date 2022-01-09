//leetcode question 442
// Program to print elements occuring more than once as an array
#include<iostream>
using namespace std;

void printElements(int a[],int n){

int b[n+1]={0};

for(int i=0;i<n;i++){

if(a[i]==b[a[i]]){

   b[a[i]]=-1;
   continue;
}

 else{
  b[a[i]]=a[i]; 
 }
}
 for(int i=0;i<n+1;i++){

     if(b[i]==-1){
         cout << i << " ";
     }
 }

 cout << endl;
 


}

int main(){

int n;
cout << "Enter number of Elements to enter in array" << endl;

cin >> n;
int a[n];

for(int i=0;i<n;i++){

   cin >> a[i];

}

printElements(a,n);

    return 0;
}