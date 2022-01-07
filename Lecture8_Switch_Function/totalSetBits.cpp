#include<iostream>
using namespace std;

int bitCount(int n){
    int i=0;

while (n!=0)
{  
     if(n&1==1){
    i++;
}
    n=n>>1;
}
return i;
}


int main(){
 int a,b;
 cout << "Enter A and B  "<< endl;
 cin >> a >> b;
 cout << bitCount(a)+bitCount(b)<<endl;
    return 0;
}