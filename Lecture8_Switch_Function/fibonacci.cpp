#include<iostream>
using namespace std;

int fib(int n){
  
   if(n==2||n==1)
      return n-1;

   return fib(n-1)+fib(n-2);   
}


int main(){
    cout<< "Enter which term of Fibonacci Series you want  "<< endl;
    int n;
    cin >> n;
    cout<< fib(n) << endl;
    return 0;
}