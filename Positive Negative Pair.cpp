// ques - https://practice.geeksforgeeks.org/problems/positive-negative-pair5209/1

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int x=arr[i];
            if(m.find(-x)!=m.end()){
                
                if(x<0){
                v.push_back(x);
                v.push_back(-x);}
                
                else if(x>0){
                    v.push_back(-x);
                    v.push_back(x);
                }
            }
            else m[x]++;
        }
        
        return v;
    }
};
