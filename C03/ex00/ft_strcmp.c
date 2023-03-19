int ft_strcmp(char *s1, char *s2)
{
    unsigned int    i;
    //First non-matching character ascii numbers are important
    i = 0;
    while(s1[i] == s2[i] && (s1[i] && s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
