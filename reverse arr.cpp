#include<stdio.h>

int main()
{

    int a;
    scanf("%d", &a);
    int arr[a+5];

    for(int i=0;i<a;++i) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[a - i - 1];
        arr[a - i - 1] = temp;
    }
    for(int i=0;i<a;++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
