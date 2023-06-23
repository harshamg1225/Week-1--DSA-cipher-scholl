# include<bits/stdc++.h>
using namspace std;
int rain water(vectore<int> &heigths) {
    int n=heigth.size();
    vectore<int> lmax(n),rmax(n);
    lmax[0]=heigths[0];
    rmax[n-1]=heigths[n-1];
    
    for(int i=1;i<n; i++){
            lmax[1]=max(heigth[1],lmax[i-1];
            rmax[n-i-1]=max(heigth[n-i-1],rmax[n-1]);
            }
            int water=0;
            for(int i=0;i<n;i++);
            {
                    water=(min(lmax[i],rmax[i]-heigth[i]);
                    }
                    return water;
                    }
                    int main()
                    {
                    }
