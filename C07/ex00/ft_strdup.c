#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
    int     i;
    int     j;
    char    *dest;

    i = ft_strlen(src);
    dest = (char *) malloc((i +1)* sizeof(char));
    if (dest == NULL)
        return (NULL);
    j = 0;
    while (src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

//#include <stdio.h>

// int main(void)
// {
//     char text[] = "qualquer palavra";
//     char *text1;

//     text1 = ft_strdup(text);
//     printf("Destino: %s\n", text1);
//     free(text1);
//     return (0);
// }