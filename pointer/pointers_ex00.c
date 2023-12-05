#include <stdio.h>
int main()
{
    char *p;
    int *i;
    double *d;

    int j = 10;
    p = "yusuf";
    double f = 21.3;

    i = &j;
    d = &f;

    printf("j nin adresi : %p\nj nin değeri : %d\n",i,*i);
    printf("f nin adresi : %p\nf nin değeri : %.2f\n",d,*d);
}