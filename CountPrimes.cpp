class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        int flag = 0;
        if (n==0 || n==1 || n==2) return 0;
        
        else{
            for (int i=2;i<n;i++)
            {
                if(isprime(i)) count++;
            }
            return count;
        }
        
    }
    
    bool isprime(int x){
        
        if (x==1 || x ==2) return true;
        else{
        for (int i=2;i<x;i++)
            {
                if(x%i == 0) return false;
            }
        return true;
    }
    }
};