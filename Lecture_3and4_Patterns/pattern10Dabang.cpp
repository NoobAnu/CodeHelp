#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int row=1,col;

while(row<=n){
int col =1;

// Print the first triangle
while(col<=n-row+1){

cout << col;
col++;

}

// Print second triangle
col=1;
while(col<=row-1){

cout << "*";
col++;

}
// Print third triangle
col=1;
while(col<=row-1){

cout << "*";
col++;

}

// Print fourth triangle
col=n-row+1;
while(col>=1){

cout << col;
col--;

}
  
    cout << endl;
    row++;
}
    return 0;
}