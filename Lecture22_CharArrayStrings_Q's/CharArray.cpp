#include<iostream>
using namespace std;

void reverseString(char ch[],int len){
int s=0;
int e=len-1;

while (s<e)
{
    swap(ch[s++],ch[e--]);
    
}

}

int getLength(char ch[]){
int i;
for( i=0;ch[i]!='\0';i++){
}
return i;
}
void print(char ch[]){
int i;
for( i=0;ch[i]!='\0';i++){
cout<<ch[i];
}
}

int main(){
char ch[20];

cin >> ch;
cout<< "Length of Stored Array of char is = " << getLength(ch);

cout << "Reversed Array of char is => "<<endl;
reverseString(ch,getLength(ch));
print(ch);

    return 0;
}