
        #include<bits/stdc++.h>
using namespace std;



        const int TOT = 1000000;
        map<int,int> ar[TOT+1]; 
        void sieve(){
            int isPrime[TOT + 1];
            for(int i = 0; i <=TOT; ++i) {
                isPrime[i] = i%2;
            }
            isPrime[1] = false;
            isPrime[2] = true;
            for(int i = 3; i*i <=TOT ; i+=2) {
                if(isPrime[i]){
                    for(int j = i*i; j <=TOT ; j+=i) {
                        isPrime[j] = false;
                    }
                }
            }
            vector<int> prime;
            for(int i = 0; i <=TOT; ++i) {
                if(isPrime[i]){
                    prime.push_back(i);
                }
            }
            for(int i = 2; i <=TOT; ++i) {
                int x = i;
                for(int j = 0; j <prime.size() && prime[j] * prime[j]<=x; ++j) {
                    while(x%prime[j]==0){
                        ar[i][prime[j]]++;
                        x/=prime[j];
                    }
                }
                if(x>1){
                    ar[i][x]++;
                }
            }
        }



        int main() {
            ios_base::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);
            sieve();
        
        }

