#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> ans){
    for(int i: ans)
       cout<< i << " ";
}

void reverse(vector<int> &ans){
    int i=0;
    int j=ans.size()-1;

    while(i<=j){
   swap(ans[i],ans[j]);
   i++;
   j--;
    }
}

void SumArray(vector<int> &a,int n,vector<int> &b,int m){
vector<int> ans;
int i=n-1,j=m-1,carry=0;

while (i>=0 && j>=0)
{
   int sum =a[i--]+b[j--]+carry;
   carry=sum/10;
   ans.push_back(sum%10);
}

while(i>=0){
int sum =a[i--]+carry;
   carry=sum/10;
   ans.push_back(sum%10);
}

while(j>=0){
int sum =b[j--]+carry;
   carry=sum/10;
   ans.push_back(sum%10);
}

while(carry!=0){
int sum =carry;
   carry=sum/10;
   ans.push_back(sum%10); 
}
    reverse(ans);
    print(ans);
}

int main(){

vector<int> arr1={1,3,4,5};
vector<int> arr2={4,5};

SumArray(arr1,4,arr2,2);

    return 0;
}