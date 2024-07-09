#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while (left <= right){
            int mid = (left+right)/2;
            if (target == nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return -1;
    }
};


int main() {
    vector<int> array = {-1,0,3,5,9,12};

    int target = 9;

    Solution sol;

    printf("answer: %d",sol.search(array,target));


    return 0;
}


