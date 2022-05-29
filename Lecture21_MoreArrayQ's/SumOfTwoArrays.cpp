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
int i=n-1;
int j=m-1;
int carry=0;

while (i>=0 && j>=0)
{
   int sum =a[i]+b[j]+carry;
   carry=sum/10;
   sum=sum%10;
   ans.push_back(sum);
   i--;
   j--;

}
while(i>=0){
int sum =a[i]+carry;
   carry=sum/10;
   sum=sum%10;
   ans.push_back(sum);
   i--;
}
while(j>=0){
int sum =b[j]+carry;
   carry=sum/10;
   sum=sum%10;
   ans.push_back(sum);
   j--;
}

while(carry!=0){
int sum =carry;
   carry=sum/10;
   sum=sum%10;
   ans.push_back(sum);
   
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