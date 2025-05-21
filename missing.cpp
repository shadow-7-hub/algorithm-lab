#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int arr[a],arr2[a-1];

    for(int i = 0; i < a; ++i) {
        arr[i] = i+1;
    }

    for(int i = 0; i < a-1; ++i) {
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < a-1; ++i) {
        if(arr[i]!=arr2[i]) {
            printf("%d\n", arr[i]);
                return 0;
        }
    }
    printf("%d\n", arr[a-1]);
    return 0;
}


