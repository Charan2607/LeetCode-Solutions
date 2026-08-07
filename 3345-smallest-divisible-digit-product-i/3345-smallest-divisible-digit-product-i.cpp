class Solution {
public:

    int product_digit(int x){
        int ans =1;
        while(x>0){
            ans*=x%10;
            x/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        int anss=1;
        for(int i=n;i<n+t;i++){
            if(product_digit(i)%t==0)    return i;
        }
        return 0;
    }
};