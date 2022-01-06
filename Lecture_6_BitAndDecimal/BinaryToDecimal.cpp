#include<iostream>
#include<math.h>
using namespace std;

int main(){

int n;
cin >> n;
int ans=0,dig,i=0;
while (n)
{
 dig=n%10;
 n /=10;
 ans = dig*pow(2,i)+ans;
 i++;   

}
    cout << "Number in Decimal is "<< ans <<endl;
    return 0;
}