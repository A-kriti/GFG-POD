// ques - https://practice.geeksforgeeks.org/problems/anagram-of-string/1#

int remAnagram(string str1, string str2)
{
// Your code goes here
    
    map<char,int>m;
    
    for(char x:str1){
        m[x]++;
    }
    
    for(char x:str2){
        m[x]--;
    }
    
    int c=0;
    
    for(auto x:m){
        c+=abs(x.second);
    }
    
    return c;
}
