#include<iostream>
 using namespace std;

int main(){
   int n;
   cin >> n;

// Consecutive Numbers in pattern in triangular shape
int row=1,num;
while (row<=n){
  num=1;
    while (num<=row)
    {
        cout << num << " ";
        num = num+1;
        /* code */
    }

    cout << endl;
    row += 1;
    

}

return 0;
}



//This file has been fixed by Anubhav Gupta.