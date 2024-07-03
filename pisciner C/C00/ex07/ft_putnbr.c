/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:38:43 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/23 15:38:46 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	printmax(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		printmax();
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb < 10)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
