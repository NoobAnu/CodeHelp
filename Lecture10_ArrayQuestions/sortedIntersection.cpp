//leetcode question
#include<iostream>
#include<math.h>
using namespace std;

void intersect(int a1[], int a2[], int n1, int n2){
int h1=0,h2=0,i=-1 ,an=min(n1,n2);
int ans[an]={0};


while(h1<n1 && h2<n2){
 
 if(a1[h1]==a2[h2]){
      i++;
      ans[i]=a1[h1];
       h1++; h2++; 
 }

 else if(a1[h1]<a2[h2])
       h1++;
 

 else
    h2++;

}
for (int i=0;i<an;i++){
  
  if(ans[0]==-1){
     cout << "-1";
     break;
  }
   
   cout << ans[i] << " ";  

    if(ans[i+1]<ans[i]){
    break;
   }

}
cout << endl;

}


int main() {

int n1,n2;
cout<< "Size of Array 1 and Array 2" << endl;
cin >> n1 >> n2;

int a1[n1], a2[n2];

cout << "Enter " << n1 << "elements of array 1"<< endl;
for (int i=0;i<n1;i++){
  cin >> a1[i];

}
cout << "Enter " << n2 << "elements of array 2"<< endl;

for (int i=0;i<n2;i++){
  cin >> a2[i];

}

intersect(a1,a2,n1,n2);

    return 0;
}