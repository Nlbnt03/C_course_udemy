#include <stdio.h>
void swap(int *f, int *s)
{
    int tmp;
    printf("a = %d, b = %d\n",*f,*s);
    tmp = *s;
    *s = *f;
    *f = tmp;
    printf("a = %d, b = %d\n",*f,*s);
}

int main()
{
    int a = 10;
    int b = 20;

    swap(&a,&b);
}