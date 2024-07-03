/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:40:08 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/23 18:40:11 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	is_signal(char c)
{
	return (c == '-' || c == '+');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	number;

	i = 0;
	number = 0;
	is_negative = 0;
	while (ft_is_space(str[i]))
		i++;
	while (is_signal(str[i]))
	{
		if (str[i++] == '-')
			is_negative = !is_negative;
	}
	while (is_number(str[i]) && str[i] != '\0')
		number = 10 * number + str[i++] - '0';
	if (is_negative)
		return (-number);
	return (number);
}
