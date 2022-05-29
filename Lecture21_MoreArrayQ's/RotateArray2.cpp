#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> &arr){
    for(int i: arr)
     cout << i << "  ";
}

  void rotateArray(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums =temp;
    }

int main(){
vector<int> arr={1,2,3,4,5,6,7,8};

rotateArray(arr,3);
printArray(arr);

    return 0;
}