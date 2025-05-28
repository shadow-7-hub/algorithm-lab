#include<bits/stdc++.h>


int main()
{
    int n,key;
    scanf("%d", &n);
    int arr[n+1],arr2[10000] = {0};
    for(int i=0;i<n;++i) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;++i) {
        if(arr[i] % 2 == 0) {
           arr2[i]  = arr[i];
        }
    }
    for(int i=0;i<n;++i) {
        if(arr2[i]!=0) {
            printf("%d ", arr2[i]);
        }
    }
    return 0;
}


