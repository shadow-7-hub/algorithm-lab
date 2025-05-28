#include<bits/stdc++.h>


int main()
{
    int n,key;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0;i<n;++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    int p = 0;
    for(int i=0;i<n;++i) {
        if(arr[i]==key) {
           p = 1 ;
        }
    }
    if(p) printf("YES\n");
    else printf("NO\n");
    return 0;
}

