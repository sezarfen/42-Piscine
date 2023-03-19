char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;

    i = 0;
    while(*dest)
        dest++;
    while(*src && i < nb)
    {
        *dest = *src;
        i++;
        src++;
        dest++;
    }
    return (dest);
}
