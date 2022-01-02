// ques - https://practice.geeksforgeeks.org/problems/kth-smallest-factor2345/1

int kThSmallestFactor(int N , int K) {
        // code here
        
        for(int i=1;i<=N;i++){
            
            
            if(N%i==0)K--;
            if(K==0)return i;
            
        }
        
        return -1;
    }
