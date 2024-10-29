/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:01:16 by nleandro          #+#    #+#             */
/*   Updated: 2024/08/31 21:50:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pushnum(int n)
{
	char	ns[10];
	char	nd[10];
	int		i;
	int		j;
	int		k;

	i = 10;
	while (i-- >= 1)
	{
		ns[i] = n % 10 + 48;
		n = n / 10;
		if (ns[i] != 48)
		{
			j = i;
		}
	}
	k = j;
	while (j <= 9)
	{
		i++;
		nd[i] = ns[j];
		j++;
	}
	write(1, nd, 10 - k);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		pushnum(0 - nb);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		pushnum(nb);
	}
}
/*int	main(void)
{
	ft_putnbr();
}*/