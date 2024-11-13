/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:23:20 by ilnassi           #+#    #+#             */
/*   Updated: 2024/11/09 15:23:53 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}
/*
int	main(void)
{
    printf("This should be 2147483647\n");
    ft_putnbr(2147483647);
    printf("\nThis should be -2147483648\n");
    ft_putnbr(-2147483648);
    printf("\nThis should be 0\n");
    ft_putnbr(0);
    printf("\nThis should be 1\n");
    ft_putnbr(1);
    printf("\nThis should be 42\n");
    ft_putnbr(42);
    printf("\n");
    return (0);
}
*/
