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
    int p = 0, q = 0;
    for(int i=0;i<n;++i) {
        if(arr[i]==key) {
           p = i;
           break;
        }
    }
    for(int i=0;i<n;++i) {
        if(arr[i]==key) {
           q = i;
        }
    }

    if(p!=0 )printf("first position %d last position %d\n", p,q);
    else return -1;
    return 0;
}


