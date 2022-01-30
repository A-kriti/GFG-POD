// ques - https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1#

void binSort(int A[], int N)
{
   //Your code here
   
   /**************
    * No need to print the array
    * ************/
    
    int i=0;
    int j=N-1;
     
    while(i<j){
        
        if(A[i]==1 && A[j]==0){
            
            int t=A[i];
            A[i]=A[j];
            A[j]=t;
            //swap(A[i],A[j]);
            i++;
            j--;
        }
        
        else if(A[i]==0)i++;
        else if(A[j]==1)j--;
        
    }
    
    
    
    
    
}
    
