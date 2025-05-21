#include<stdio.h>


int main()
{
    int a;
    scanf("%d", &a);
    int arr[a+5];

    for(int i=0;i<a;++i) {
        scanf("%d", &arr[i]);
    }
    int mx = 0;
    int index = 0;
    for(int i=0;i<a;++i) {
        if(arr[i]>mx) {
            mx = arr[i];
            index = i;
        }
    }
    mx = arr[index];
    arr[index] = -1000;
    int smx = 0;

     for(int i=0;i<a;++i) {
        if(arr[i]>smx) {
            smx = arr[i];
        }
     }
        printf("%d\n", smx);

        return 0;
}
