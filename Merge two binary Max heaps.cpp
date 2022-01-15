// ques - https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>v;
        priority_queue<int>q;
        
        for(int i=0;i<n;i++){
            q.push(a[i]);
        }
        for(int i=0;i<m;i++){
            q.push(b[i]);
        }
        
        while(!q.empty()){
            v.push_back(q.top());
            q.pop();
        }
        
        return v;
    }
};
