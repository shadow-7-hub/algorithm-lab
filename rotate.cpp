#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    for(int i = 0; i < a; ++i) {
        scanf("%d", &arr[i]);
    }

    int b;
    scanf("%d", &b);
    for(int i = b; i < a; ++i){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < b; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
