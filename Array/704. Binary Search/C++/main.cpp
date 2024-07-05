#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }

    int search_logO_1(std::vector<int>& nums, int target) {
        
        std::sort(nums.begin(), nums.end());

        auto it = std::lower_bound(nums.begin(), nums.end(), target);
        if (it != nums.end() && *it == target) {
            return std::distance(nums.begin(), it);
        }
        return -1;
    }

    int search_logO_2(std::vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
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


