// ques - https://practice.geeksforgeeks.org/problems/rearrange-a-string4100/1#


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        
        string k="";
        int a=0;
        
        for(char x:str){
            int t=x;
            if(65<=t || t>=90){
                k+=x;
            }
            
            else{
                a+=x-'0';
            }
        }
        
        sort(k.begin(),k.end());
        k+=(to_string(a));
        
        return k;
        
    }
};
