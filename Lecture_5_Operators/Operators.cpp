#include<iostream>
using namespace std;

int main(){

int a,b;

cin >> a >> b;

cout<< "And Operator " << (a&b) << endl;
cout<< "OR Operator " << (a|b) << endl;
cout<< "XOR Operator " << (a^b) << endl;
cout<< "NOT Operator  "<< "NOT A " << (~a) << " NOT B " <<  (~b) << endl;

cout << "Right Shift of a" << " By 1 => " << (a>>1) << " By 2=> " << (a>>2) << endl;

cout << "Left Shift of b" << " By 1=> " << (b<<1) << " By 2=> " << (b<<2) << endl;

return 0;

}