#include<bits/stdc++.h>
using namespace std;
vector <bool> v(100000000,true);
int pri[8000000];
int main()
{
    long long int n = 100000000;
    long int i,j ;
    v[1] = false;
    v[0] = false;
    for(i=4;i<=n;i+=2)
     v[i]=false;
      for(i=3;i*i<=n;i+=2)
     {
           if(v[i])
             {
                for(j=i*i;j<=n;j=j+(2*i))
                v[j] = false;
             }
     }
       j=0;
       pri[0] = 2;
       for(i=3;i<=n;i+=2)
      {
        if(v[i])
        pri[++j]=i;
       }
       for(i=1;i<=j;i+=100)
      cout<<pri[i-1]<<"\n";
      return 0;
   }
