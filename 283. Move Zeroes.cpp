class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two pointers
        int start = 0;
        int mid = 0;
        int end = nums.size()-1;
        while(mid <= end){
            if(nums[mid] != 0){
                std::swap(nums[start], nums[mid]);
                start++;
            }
            mid++;
        }
    }
};

[0,1,0,3,12]
 s m
[1,0,0,3,12]
   s m
   s   m
[1,3,0,0,12]
     s m
     s   m
[1,3,12,0,0]
     