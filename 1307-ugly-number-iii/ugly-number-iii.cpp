class Solution {
public:
    // int nthUglyNumber(int n, int a, int b, int c) {
    //     int num=2;
    //     while(n>0){
    //         if( num%a==0 || num%b==0 || num%c==0 ){
    //             num++;
    //             n--;
    //         }
    //         else num++;
    //     }
    //     return --num;
        
    // }
    long long gcd(long long a, long long b) {
        while (b) {
            long long t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    int nthUglyNumber(int n, int a, int b, int c) {
        long long ab = lcm(a, b);
        long long ac = lcm(a, c);
        long long bc = lcm(b, c);
        long long abc = lcm(ab, c);

        long long low = 1, high = 2000000000LL;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            long long cnt = mid / a + mid / b + mid / c
                          - mid / ab - mid / ac - mid / bc
                          + mid / abc;

            if (cnt >= n)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};