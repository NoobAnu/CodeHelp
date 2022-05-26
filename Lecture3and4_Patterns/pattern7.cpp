#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int row=1,col;

while (row<=n)
{  col=1;
   
   
   while (col+row<=n)
{
    cout<< " ";
    col++;
}
col=1;

while (col<=row)
{
    cout<< "*";
    col++;
}
   cout<< endl;
   row++;

}



return 0;
}