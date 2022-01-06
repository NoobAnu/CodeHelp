#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int row=1,col;
char print;

while(row<=n){
print = ('A'+n-1)-row+1;

while(print<= 'A'+n-1)
{
cout<< print<< " ";
print= print+1;
}

cout << endl;
    row++;
}
return 0;
}