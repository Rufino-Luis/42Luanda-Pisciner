/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_escreve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 05:26:29 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/30 05:26:35 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_write_str(char *num, char *buffer, int last)
{
	int		i;
	int		size;
	char	*start_str;

	start_str = ft_strstr(buffer, num);
	size = ft_strlen(num);
	i = 0;
	while (start_str[i] && start_str[i] != '\n')
	{
		while (start_str[i] != ':')
			i++;
		if (start_str[i] == ':')
			i++;
		while (start_str[i] == ' ')
			i++;
		while (start_str[i] >= 32 && start_str[i] <= 126)
		{
			write(1, &start_str[i], 1);
			i++;
		}
	}
	if (last != 0)
		write(1, " ", 1);
}

void	ft_write_char(char c, char *buffer, int end)
{
	int		i;
	int		size;
	char	*start_str;
	char	num[2];

	num[0] = c;
	start_str = ft_strstr(buffer, num);
	size = ft_strlen(num);
	i = 0;
	while (start_str[i] && start_str[i] != '\n')
	{
		while (start_str[i] != ':')
			i++;
		if (start_str[i] == ':')
			i++;
		while (start_str[i] == ' ')
			i++;
		while (start_str[i] >= 32 && start_str[i] <= 126)
		{
			write(1, &start_str[i], 1);
			i++;
		}
	}
	if (end == 0)
		write(1, " ", 1);
}
