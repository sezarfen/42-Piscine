char    *ft_strcat(char *dest, char *src)
{
    while(*dest)
        dest++;
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (dest);
}
