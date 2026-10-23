/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:37:23 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:37:24 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		dest[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		dest[j++] = s2[i++];
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main(void)
{
    char s1[] = "This is";
    char s2[] = " a string!";
    char *result = ft_strjoin(s1, s2);

    if (result)
    {
        printf("%s\n", result);
        free(result); // Free the allocated memory
    }
    else
    {
        printf("Error: substring could not be created.\n");
    }
    return 0;
}*/
