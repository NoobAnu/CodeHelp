#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
    int sumOfDigits=0,prodOfDigits=1,num;
        
        for(int num=n ;num!=0;num=num/10){
            sumOfDigits=sumOfDigits +(num%10);
            prodOfDigits=prodOfDigits*(num%10);
            
            }
        return prodOfDigits-sumOfDigits;

    return 0;
}