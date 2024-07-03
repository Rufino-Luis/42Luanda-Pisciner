/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:23:05 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/23 17:23:09 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;
	unsigned int	rex;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	res = j;
	rex = ft_strlen(src);
	if (size == 0 || size <= res)
		return (rex + size);
	while (src[i] != '\0' && i < size - res - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (res + rex);
}
