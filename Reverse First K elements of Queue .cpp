//ques - https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    //  1 2 3 4 5
    //  4 5 3 2 1
    
    stack<int>s;
    int c=0;
    
    while(c<k){
        
        s.push(q.front());
        q.pop();
        
        c++;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int t=q.size()-k;
    
    while(t>0){
       
        q.push(q.front());
        q.pop();
        t--;
    }
    
    return q;
    
    
}
