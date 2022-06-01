#include<iostream>
using namespace std;
bool validCharacter(char ch){
if( (ch>='a' && ch <= 'z')||(ch>='A' && ch <= 'Z') ||(ch>='0' && ch <= '9'))
return true;

return false;
}

char toLowerCase(char ch){
if(ch>='a' && ch<='z')
   return ch;

else
ch = ch - ('A'-'a');

return ch;
}

bool checkPalindrome(char name[]){
int size=0;
for(int i=0; name[i]!= '\0';i++){
size++;
}

int s=0;
int e=size-1;

while(s<e){
if(toLowerCase(name[e])!=toLowerCase(name[s]))
 return false;

else{
  s++;
  e--;
}

}

    return true;
}

int main(){

char name[20];
cin >> name;


if(checkPalindrome(name)==true)
  cout << "Given String is Palindrome"<< endl;

  else
  cout << " Not a palindrome String " << endl;

    return 0;
}