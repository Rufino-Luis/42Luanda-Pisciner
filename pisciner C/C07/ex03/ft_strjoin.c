/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:37:34 by ruzua             #+#    #+#             */
/*   Updated: 2024/07/02 15:37:37 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ok;
	int		a;
	int		b;
	int		c;

	ok = malloc(sizeof(strs));
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			ok[c++] = strs[a][b++];
		}
		b = 0;
		while (sep[b] != '\0' && a != size - 1)
		{
			ok[c++] = sep[b++];
		}
		a++;
	}
	ok[c] = '\0';
	return (ok);
}
