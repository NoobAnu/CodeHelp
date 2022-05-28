#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<string> q;

q.push("A");

q.push("B");
q.push("C");

cout<< " Size of Q =>"<< q.size()<<endl;

cout << " Front  of Q =>  "<< q.front()<< endl;

cout << " Popping "<<endl;
q.pop();
cout << " Front  of Q=> "<< q.front()<< endl;
cout<< " Size of Q=> "<< q.size()<<endl;


    return 0;
}