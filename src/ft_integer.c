/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:21:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/10/17 08:23:01 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
** Function that prints an integer in base 10.
*/

static int	integer_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_putnbr_with_button_fd(int n, int fd, int button)
{
	int	n2;

	if (button == 0)
	{
		n2 = n;
		button = 1;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (integer_len(n));
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= (-1);
	}
	if (n >= 10)
		ft_putnbr_with_button_fd(n / 10, fd, button);
	ft_putchar_fd(n % 10 + '0', fd);
	if (n == n2)
		return (integer_len(n));
	else if (n == -n2)
		return (integer_len(n2));
	return (0);
}

int	ft_integer(va_list args)
{
	return (ft_putnbr_with_button_fd(va_arg(args, int), 1, 0));
}

/*
int main()
{
	printf("%d\012%d\012%d\012", 5,-35,0);
	ft_printf("%d\012%d\012%d\012", 5,-35,0);

	return (0);
}
*/
