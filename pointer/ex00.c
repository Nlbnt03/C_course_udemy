#include <stdio.h>
int location(char c)
{
    if (c >= 65 && c <= 90)
    {
        return (c - 65 + 1);
    }
    else if (c >= 97 && c <= 122)
    {
        return (c - 97 + 1);
    }
    else
    {
        return (0); 
    }
}

int main()
{
    printf("%d\n",location('z'));
}