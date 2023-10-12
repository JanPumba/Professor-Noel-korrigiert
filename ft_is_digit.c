#include <stdio.h>
// value 1 für; ja char ist ein digit. value 0 für: nein char ist kein digit.
int ft_is_digit(char a)
{
    if(a >= 48 && a <= 57)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char a = 'a';
    int res = ft_is_digit(a);

    printf("%d", res);
}