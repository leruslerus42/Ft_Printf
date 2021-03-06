/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:19:30 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/10/17 08:16:38 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
**		Function to print a simple charachter
*/

int	ft_character(va_list args)
{
	ft_putchar_fd(va_arg(args, int), 1);
	return (1);
}

/*
int main()
{
	//printf("%c%c%c%c", '\064', '\062', '\053', '\053');
	ft_printf("%c%c%c%c", '\064', '\062', '\053', '\053');
	return (0);
}
*/
