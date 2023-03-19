char    *ft_strstr(char *str, char *to_find)
{
    int i;

    i = 0;
    while(*str)
    {
        if(*str == *to_find)
        {
            while(*(to_find) && *(str) == *(to_find))
            {
                to_find++;
                str++;
                i++;
            }
            if(*to_find == '\0')
                return str - i;
            to_find = to_find - i;
            i = 0;
        }
        str++;
    }
    return ;
}

#include <stdio.h>
int main(void)
{
    char str[20] = "What th the hack";
    char to_find[] = "the";

    char *ptr = ft_strstr(str,to_find);
    printf("%s" , ptr);
    return (0);
}
