// ques - https://practice.geeksforgeeks.org/problems/1s-complement2819/1
  
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        for(int i=0;i<N;i++){
            if(S[i]=='0'){
                S[i]='1';
            }
            
            else if(S[i]=='1'){
                S[i]='0';
            }
        }

        return S;


    }
};
