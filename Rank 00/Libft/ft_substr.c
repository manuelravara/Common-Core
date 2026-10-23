/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:39:04 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:39:05 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    // char    string[] = "This is a string!";
    // unsigned int    start = 4;
    // size_t len = 8;

    // char *substring = ft_substr(string, start, len);
    // if (substring)
    // {
    //     printf("%s\n", substring);
    //     free(substring); // Free the allocated memory
    // }
    // else
    // {
    //     printf("Error: substring could not be created.\n");
    // }
    
	// char	str[] = "lorem ipsum dolor sit amet";
	// char	*strsub;
	// char *bullshit;
	// if (!(strsub = ft_substr(str, 400, 20)))
	// 	printf("NULL");
	// else
	// {
	// 	bullshit = (char *)&strsub[30];
	// 	bullshit = "FULL BULLSHIT";
	// 	if (strsub)
	// 		printf("%s", strsub);
	// 	else
	// 		printf("rip");
	// }
	// if (str == strsub)
	// 	printf("\nA new string was not returned");
	// (void)bullshit;
	// printf("\n");

	char * s;
	s = ft_substr("tripouille", 100, 1);
	// printf("%s\n", s);
	if (!strcmp(s, ""))
		printf("0");
	else
		printf("1");
	printf("\n");
}*/
