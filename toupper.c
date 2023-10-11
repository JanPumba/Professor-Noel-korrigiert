#include <stdio.h>

char ft_to_upper(char a)
{
    if (a >= 97 && a <= 122)
    {
        return a - 32;
    }
    else
    {
        return a;
    }

}

int main()
{
    char a = 98;
    char inBIG = ft_to_upper(a);

    printf("%c\n", a);

    printf("%c\n", inBIG);
}