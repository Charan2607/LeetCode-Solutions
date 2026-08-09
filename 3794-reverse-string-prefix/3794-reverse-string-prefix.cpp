class Solution {
public:
    string reversePrefix(string s, int k) {
        int p1=0,p2=k-1;
        // string ans ="";
        if(k==1)return s;
        while(p1<=p2){
            swap(s[p1],s[p2]);

            p1++;
            p2--;
        }
        return s;
    }
};