#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string s){
int len = s.length();
transform(s.begin(), s.end(), s.begin(), ::tolower);
cout<< s << endl;




    return true;
}

int main(){

string s;
cin >> s;
cout << s<<endl;

if(checkPalindrome(s))
  cout << "Given String is Palindrome"<< endl;

  else
  cout << " Not a palindrome String " << endl;

    return 0;
}