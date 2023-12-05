#include <stdio.h>
int main()
{
    int *f,*s;
    int a = 10;
    int b = 21;
    int result;

    f = &a;
    s = &b;

    result = *f + *s;
    printf("%d + %d = %d\n",*f,*s,result);
}