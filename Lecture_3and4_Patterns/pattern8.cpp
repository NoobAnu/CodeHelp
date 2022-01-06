#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int row=1,col;

while (row<=n)
{  col=1;
   
while (col<=(n-row+1))
{
    cout<< "*";
    col++;
}
   cout<< endl;
   row++;

}



return 0;
}