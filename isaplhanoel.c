#include <stdio.h>

//das Programm  schreibt dir bei zeichen die nicht dem alphabet gehören ein 0 und bei zeichen die dem alphabet gehören die entsprechende ascii numer dessen alphabet.

int ft_is_alpha(char u)
{
    int ans = 0;

    if(u >= 65 && u <= 90 || u >= 97 && u <= 122)
    {
        ans = u;
    }
    else
    
    return ans;
}

int main()
{
    char a = 'a';

    int ans = ft_is_alpha(a);

    printf("%d", ans);
}