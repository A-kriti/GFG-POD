// ques - https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1

class Solution {
    
    bool isprime(int x){
        if(x<=1)return false;
        
        if(x==2)return true;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0)return false;
        }
        
        return true;
    }
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int>v;
        for(int i=M;i<=N;i++){
            if(isprime(i))v.push_back(i);
        }
        
        return v;
    }
};
