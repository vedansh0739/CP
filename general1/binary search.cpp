int x = -1;
for (int b = z; b >= 1; b /= 2) {
while (!ok(x+b)) x += b;
}
int k = x+1;




//another example
bool isPerfectSquare(int num) {
        long long n=num;
        long long x = -1;
        for (long long b = 100000; b >= 1; b /= 2) {
            while ((x+b)*(x+b)<=n) x += b;
        }
        long long k = x;
        if(k*k==num)return true;
        return false;
}




//find min possible
while(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(is_possible(weights, mid, days))
            {
                minians = mid;
                
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
