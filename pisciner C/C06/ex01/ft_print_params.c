/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:17:46 by ndomingo          #+#    #+#             */
/*   Updated: 2024/06/29 15:17:48 by ndomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc >= 2)
	{
		while (argc > j)
		{
			while (argv[j][i] != '\0')
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			j++;
		}
	}
	return (0);
}
