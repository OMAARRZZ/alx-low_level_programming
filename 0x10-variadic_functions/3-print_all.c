#include <stdlib.h>

void _putchar(char c);

char *argstostr(int ac, char **av)
{
    char *str;
    int len = 0, i = 0, j;

    if (ac == 0 || av == NULL)
        return (NULL);

    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            len++;
            j++;
        }
        len++;
        i++;
    }

    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);

    len = 0;
    i = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            _putchar(av[i][j]);
            str[len++] = av[i][j];
            j++;
        }
        _putchar('\n');
        str[len++] = '\n';
        i++;
    }
    str[len] = '\0';

    return (str);
}

