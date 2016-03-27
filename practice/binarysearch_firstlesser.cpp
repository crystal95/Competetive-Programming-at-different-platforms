bsearch(int x, vector<int> &arr)

{ int lo=1;
        int hi=x;
        if(x==0)
        return 0;
        while(lo<hi)
        {
            int mid=lo+(hi-lo+1)/2;
            if(mid*mid==x)
            return mid;
            else if(mid>x/mid)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid;
            }
           
        }
         return lo;
     }