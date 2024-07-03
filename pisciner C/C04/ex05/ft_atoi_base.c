/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:21:55 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/25 14:22:05 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_regra(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	get_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_regra(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	calc_res(char *str, char *base, int i)
{
	int	base_len;
	int	res;
	int	j;

	res = 0;
	base_len = get_base_len(base);
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		if (base[j] == '\0')
			break ;
		res = res * base_len + j;
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;

	if (get_base_len(base) < 2)
		return (0);
	i = 0;
	sign = 1;
	while (ft_regra(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (calc_res(str, base, i) * sign);
}
