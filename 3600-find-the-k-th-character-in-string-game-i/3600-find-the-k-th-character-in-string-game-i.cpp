class Solution {
private:
    char getchar(int k){
        int step = 0;
        int length = 1;
        while(length < k){
            step++;
            length *= 2;
        }
        return helper(step,k-1);
    }

    char helper(int step, int idx){
        if(step == 0)   return 'a';
        int mid = 1 << (step-1);
        if(idx < mid){
            return helper(step-1,idx);
        }
        else{
            char c = helper(step-1,idx-mid);
            return (c == 'z') ? 'a' : c+1;
        }
    }
public:
    char kthCharacter(int k) {
        return getchar(k);
    }
};