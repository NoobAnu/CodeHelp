#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(char s[]){

cout<< s << endl;




    return true;
}

int main(){

char s[20];
cin >> s;
cout << s<<endl;

if(checkPalindrome(s))
  cout << "Given String is Palindrome"<< endl;

  else
  cout << " Not a palindrome String " << endl;

    return 0;
}