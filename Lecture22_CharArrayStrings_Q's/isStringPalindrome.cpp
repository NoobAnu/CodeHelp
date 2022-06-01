#include<iostream>
using namespace std;
bool validCharacter(char ch){
if( (ch>='a' && ch <= 'z')||(ch>='A' && ch <= 'Z') ||(ch>='0' && ch <= '9'))
return true;

return false;
}

char toLowerCase(char ch){
if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
   return ch;

else
ch = ch - ('A'-'a');

return ch;
}

bool checkPalindrome(string name){
int s=0;
int e=name.length()-1;

while(s<e){
if(name[e]!=name[s])
 return false;

else{
  s++;
  e--;
}
}
    return true;
}


bool isPalindrome(string s){

string temp="";
// STEP 1 : INVALID CHARACTER HATAO
for(int i=0;i<s.length();i++){
if(validCharacter(s[i]))
   temp.push_back(s[i]);
}

// STEP 2: CONVERT TO LOWER CASE

for(int i=0;i<temp.length();i++){
    temp[i]=toLowerCase(temp[i]);
}

// STEP 3: NOW CHECK PALINDROME NORMALLY.
return checkPalindrome(temp);

}

int main(){

string s;

cin >> s;


if(isPalindrome(s)==true)
  cout << "Given String is Palindrome"<< endl;

  else
  cout << " Not a palindrome String " << endl;


    return 0;
}