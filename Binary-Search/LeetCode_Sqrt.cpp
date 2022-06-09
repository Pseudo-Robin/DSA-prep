class Solution {
public:
    long long int mySqrt(int x) {
        
        long long int num = x;
       
        
        long long int s=0;
        long long int e=x;
        
        long long int mid = s + (e-s)/2;
        
        while(s<=e) {
            
            long long int temp = mid*mid;
            
            if(temp==num) {
                return mid;
            }
            
            else if(temp > num) {
                e = mid - 1;
            }
            
            else {
                s = mid + 1;
            }
            
            mid = s + (e-s)/2;
        }
        
        return mid-1;
        
    }
};