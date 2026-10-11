class Solution {
public:
    int call(int n, int a , int b ){
        if(n==0)
            return a;
        int k = a+b;
        a = b;
        b = k;
        if(n>-1)
            return call(--n,a,b);
        return a;
    }
    int fib(int n) {
        int a = 0;
        int b = 1;
        return call(n,a,b);
        
    }
};