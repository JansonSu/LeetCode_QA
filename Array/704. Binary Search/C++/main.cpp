#include <iostream>
#include <vector>

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
};


int main() {
    vector<int> array = {-1,0,3,5,9,12};

    int target = 9;

    Solution sol;

    printf("answer: %d",sol.search(array,target));


    return 0;
}


