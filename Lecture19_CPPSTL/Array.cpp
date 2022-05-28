#include<iostream>
#include<array> // Including STL Array Library.

using namespace std;

int main(){
// Declaring STL array
array<int,4> arr = {1,2,3,4};

for(int i=0;i<4;i++){
    cout << arr[i] << " ";
}
cout<<endl;

cout << " Element at Index 2 =>" << arr.at(2) << endl;
cout << " Element at the front " << arr.front() << endl;
cout << " Element at the last " << arr.back() << endl;
cout << " To check if array is empty "<< arr.empty() << endl;

    return 0;
}