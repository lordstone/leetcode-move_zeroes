class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() <= 1) return;
        int ptr = 0, count = 0;
        while(ptr < nums.size() - count){
            if(nums[ptr] == 0){
                nums.erase(nums.begin() + ptr);
                nums.push_back(0);
                count ++;
            }else{
                ptr++;
            }
        }//end while
    }
};
