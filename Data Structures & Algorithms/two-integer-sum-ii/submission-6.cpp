class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        std::vector<int> result;

        while(left < right){
            int curr = numbers[left] + numbers[right];
            if(curr > target){
                right--;
            }else if(curr < target){
                left++;
            }else{
                result.push_back(left+1);
                result.push_back(right+1);
                return result;
            }

        }
        return result;
        
    }
};
