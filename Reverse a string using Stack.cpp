// ques - https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#

char* reverse(char *S, int len)

{
    //code here
    char *s=new char[len];
    
    for(int i=len-1;i>=0;i--){
        s[len-i-1]=S[i];
    }
    
    return s;
}
