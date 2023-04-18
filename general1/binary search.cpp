while(low<=high)
        {
            mid=(low+high)/2;
            if(ok(mid))
                {
                    ans=mid;
                    low=mid+1;
                }
            else
                high=mid-1;
        }


