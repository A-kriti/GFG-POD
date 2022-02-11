// ques - https://practice.geeksforgeeks.org/problems/remove-leading-zeros-from-an-ip-address3530/1#

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        int n=s.size();
        
        string t="";
        for(int i=0;i<n;i++){
            string x="";
            
            while(i<n && s[i]=='0')i++;
            while(i<n && s[i]!='.')x+=s[i++];
            if(x.size()==0)x="0";
            
            if(i<n){
                t+=x+'.';
            }
            else t+=x;
        }
       
        return t;
    }
};
