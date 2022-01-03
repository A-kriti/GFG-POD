// ques - https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1#

void rotate(int n,int a[][n])
{
    //code here
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            
            int t=a[i][j];
            a[i][j]=a[n-1-i][j];
            a[n-1-i][j]=t;
        }
    }
    
    
    
}
