#include<iostream>
 using namespace std;

int main(){
   int n;
   cin >> n;

// Consecutive Numbers in pattern in triangular shape
int row=1,col=1;
while (row<=n){
  
    while (col<= (row*(row+1)/2) )
    {
        cout << col << " ";
        col++;
        /* code */
    }
    
    cout << endl;
    row += 1;
    

}

return 0;
}



//This file has been fixed by Anubhav Gupta.