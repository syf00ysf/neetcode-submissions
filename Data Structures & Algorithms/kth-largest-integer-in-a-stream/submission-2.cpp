class KthLargest {
    std::priority_queue<int, vector<int>, greater<int>> pq;
    int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int num : nums){
            pq.push(num);
            if(pq.size() > k){
                pq.pop();
            }
        }
        this->kth = k;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > kth){
            pq.pop();
        }
        return pq.top();
    }
};
