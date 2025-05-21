#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    for(int i = 0; i < a; ++i) {
        scanf("%d", &arr[i]);
    }
    int freq[1000]= {0};
    for(int i = 0; i < a; ++i) {
        freq[arr[i]]++;
    }
    for(int i = 1; i < 1000; ++i) {
        if(freq[i]>0) {
        printf("%d : %d times\n", i,freq[i]);
        }
    }

    return 0;
}

