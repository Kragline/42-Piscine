#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int i = 0;
    while (str[i])
        i++;

    return (i);
}

char *str_rev(char *str)
{
    int i = 0;
    int size = str_len(str);
    int swap;

    while (i < (size / 2))
    {
        swap = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = swap;
        i++;
    }
    return (str);
}

char *ft_itoa(int nbr)
{
    int i = 0;
    int is_neg = 0;
    
    char *res = malloc(sizeof(char) * 12);
    if (res == NULL)
        return (NULL);
    if (nbr == 0)
        return ("0");

    if (nbr == -2147483648)
        return ("-2147483648");
    if (nbr < 0)
    {
        nbr = -nbr;
        is_neg = 1;
    }
    while (nbr)
    {
        res[i] = nbr % 10 + '0';
        nbr /= 10;
        i++;
    }
    if (is_neg)
        res[i] = '-';
    
    return (str_rev(res));
}

int main(void)
{
    printf("-45478218 -> %s\n", ft_itoa(-45478218));    
    printf("0 -> %s\n", ft_itoa(0));    
    printf("42 -> %s\n", ft_itoa(42));    
    printf("1475 -> %s\n", ft_itoa(1475));

    return (0);    
}
