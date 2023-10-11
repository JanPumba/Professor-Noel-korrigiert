#include <stdio.h>

char ft_to_lower(char a)
{
    if(a >= 'A' && a <= 'Z')
    {
        return a + 32;
    }
    else
    {
        return a;
    }
}

int main()
{
    char a = 'A';
    char inSMALLpp = ft_to_lower(a);

    printf("%c\n", a);
    printf("%c\n", inSMALLpp);
}