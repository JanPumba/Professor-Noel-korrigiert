#include <stdio.h>

char ft_str_chr(char *str, char a)
{
    while(*str != '\0')
    {
        if(*str == a)
        {
            return *str;
        }
        str++;
    }
}

int main()
{
    char *str = "Hello";
    char gesucht = 'o';

    char gefunden = ft_str_chr(str, gesucht);

    printf("%c", gefunden);
}