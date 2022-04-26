#include<iostream>
 using namespace std;

int main(){
   int n;
  cin >> n;

// Consecutive Numbers in pattern nXn matrix
int row=1,num=1;
while (row<=n){

    while (num<=row*n)
    {
        cout << num << " ";
        num = num+1;
        /* code */
    }

    cout << endl;
    row = row+1;
    

}

return 0;
}



//This file has been fixed by Anubhav Gupta.