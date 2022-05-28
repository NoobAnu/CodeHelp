#include<iostream>
#include<stack>

using namespace std;

int main(){

stack<string> s;

s.push("Anubhav");
s.push("Ji");
s.push("Gupta");

cout << "Let's see who is on the top " << s.top() << endl;
s.pop();
cout << "Let's see who is on the top " << s.top() << endl;

cout << "Let's see the size of stack " << s.size() << endl;

cout << "Let's see Is stack empty =  " << s.empty() << endl;

    return 0;
}