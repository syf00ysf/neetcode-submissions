class KthLargest {
public:
    std::priority_queue<int, vector<int>, std::greater<int>> min_pq;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            min_pq.push(nums[i]);
            if(min_pq.size() > k){
                min_pq.pop();
            }
           
        }
        this->k = k;
    }
    
    int add(int val) {
        min_pq.push(val);
        if(min_pq.size() > k){
            min_pq.pop();
        }
        return min_pq.top();
    }
};
