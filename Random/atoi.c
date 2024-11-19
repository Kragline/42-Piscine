#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int sign;
    int result;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
        
    if (*str == '-')
        sign *= -1;
    
    str++;
    while (*str && *str >= '0' && *str <= '9')
    {
        result = (result * 10) + (*str - '0');
        str++;
    }
    return (result * sign);
}

int main(void)
{
    printf("%d\n", atoi("       -81475hjc74"));
    printf("%d\n", ft_atoi("       -81475hjc74"));
    return (0);
}
