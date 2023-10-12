#include <stdio.h>
//value 1 für: ja char ist ein alphanumerisches zeichen && value 0 für: nein char ist kein alphanumerisches zeichen
int ft_is_al_num(char a)
{
    if(a >= '0' && a <= '9' || a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
        return 1;
    }

    return 0;
}

int main()
{
    char a = '-';
    int res = ft_is_al_num(a);

    printf("%d", res);
}