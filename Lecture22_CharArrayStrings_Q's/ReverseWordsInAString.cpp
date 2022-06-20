#include<iostream>
using namespace std;

void reverseWord(string s){
int len = s.length();
int i,j;
for(i=0,j=len-1;i<j;i++,j--){
    swap(s[i],s[j]);
}

}

void reverse(string s){
int len =s.length();
string temp;
for(int i=0;i<len;i++){
if(s[i] == ' '){
reverseWord(temp);
cout<<temp;
temp="";
continue;
}
temp.push_back(s[i]);
}



}


int main(){
string s;

getline(cin,s);

reverse(s);
    return 0;
}