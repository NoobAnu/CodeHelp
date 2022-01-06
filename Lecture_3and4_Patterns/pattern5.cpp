#include<iostream>
 using namespace std;

int main(){
   int n;
   cin >> n;

// Consecutive Numbers in pattern nXn matrix
int row=1,col;
char print='A';
while (row<=n){
   col =1;
    while (col<=n)
    {
        
        cout << print << " ";
        col = col+1;
        print =print+1;
        /* code */
    }

    cout << endl;
    row = row+1;
    

}

return 0;
}



//This file has been fixed by Anubhav Gupta.