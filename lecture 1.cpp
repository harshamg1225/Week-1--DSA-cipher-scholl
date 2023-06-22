#include <bits/stdc++.h>
using namespace std;

Vectore<int> mergeSortedArrays(vectore<int> &a,int m, vectore<int> &bint n) {
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0) {
        if(a[i]>b[j]) {
            a[k]=a[i];
            i--;
        } else {
            a[k]=b[j];
            j--;
        }
        k--;
    }
    while(j>=0) {
        a[k]=b[j];
        j--;
        k--;
    }
}
int main() {
    
}
