#include<iostream>
using namespace std;
int main(){
int n;
n=1;

switch (n)
{
case 1: // 100 Rupee note
        cout<< "Enter Total Amount =>    ";
        cin >> n;
        cout<<"100 Rupee Note =>    "<< n/100<< endl;
        n=n%100;
case 2: // 50 Rupee note
        cout<<"50 Rupee Note =>     "<< n/50<< endl;
        n=n%50;    
case 3: // 20 Rupee note
        cout<<"20 Rupee Note =>     "<< n/20<< endl;
        n=n%20;   
case 4: // 10 Rupee note
        cout<<"10 Rupee Note =>     "<< n/10<< endl;
        n=n%10;      
case 5: // 1 Rupee coin
        cout<<"1 Rupee coin =>      "<< n/1<< endl;
                         

default: cout << "Default";
    break;
}


    return 0;
}