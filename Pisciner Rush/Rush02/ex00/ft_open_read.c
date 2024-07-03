/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 05:26:43 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/30 05:26:51 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

char	*ft_open_read(char *dict)
{
	int		fd;
	char	*buffer;
	int		file_read;
	int		file_size;

	buffer = (char *)malloc((sizeof(char) * 2048));
	if (!buffer)
	{
		dict_error();
		return (0);
	}
	file_size = 0;
	fd = open(dict, O_RDONLY);
	file_read = read(fd, buffer, 2048);
	if (file_read == -1)
	{
		dict_error();
		return (0);
	}
	else
	{
		file_size = file_read;
		close(fd);
	}
	return (buffer);
}
