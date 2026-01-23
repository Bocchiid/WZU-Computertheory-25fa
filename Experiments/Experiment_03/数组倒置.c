#include<stdio.h>

void xor_swap(int *x, int *y)
{
    *y = *x^*y;
    *x = *x^*y;
    *y = *y^*x;
}

void reverse_array(int a[], int len)
{
    int left, right = len-1;

    for(left=0; left<right; left++, right--)
        xor_swap(&a[left], &a[right]);
} 

int main()
{
    int a[16], n;

    scanf("%d", &n);

    if(n>16)
        n = 16;

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    reverse_array(a, n);

    for(int i=0; i<n; i++)
        printf("%d\n", a[i]); 
}
