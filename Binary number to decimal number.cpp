// ques - https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1

class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    int ans=0;
		    int n=str.size();
		    for(int i=n-1;i>=0;i--){
		        if(str[i]=='1')ans+=pow(2,n-1-i);
		    }
	
		    return ans;
		}
};
