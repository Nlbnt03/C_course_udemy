#include <stdio.h>
int str_len(char *p)
{
    int i;

    i = 0;
    while (p[i] != '\0')
    {
        i++;
    }
    
    return (i);
}

int isPolindrom(char *p)
{
    int lenght;
    int     i;

    i = 0;
    lenght = str_len(p);
    while (i <= (lenght / 2))
    {
           if (p[i] != p[lenght-1-i])
           {
                return 0;
           }
           i++;
    }
    return 1;

}
int main()
{
    int result;

    result = isPolindrom("level");
    if (result == 1)
    {
        printf("it is a polindrom");
    }
    else
    {
        printf("it is not a polindrom");
    }
    
}