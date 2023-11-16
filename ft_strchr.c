/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:44:19 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:44:23 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr( char *s, int c)
{
	int	i;

	i = 0;
	while ((char)c != s[i])
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)(s + i));
}

/*
#include <stdio.h>


int	main(void) {
    const char *str = "Hello, World!";
    char searchChar = 'W';

    const char *result = ft_strchr(str, searchChar);

    if (result != 0) {
        printf("Found '%c' at position %td\n", searchChar, result - str);
    } else {
        printf("'%c' not found in the string\n", searchChar);
    }

    return (0);
}
*/