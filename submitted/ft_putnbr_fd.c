/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@42berlin.de>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 01:58:27 by dlu               #+#    #+#             */
/*   Updated: 2023/04/26 01:44:28 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

#define BASE		10
#define INT_MIN_STR	"-2147483648"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == INT_MIN)
		ft_putstr_fd(INT_MIN_STR, fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n < BASE)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / BASE, fd);
		ft_putnbr_fd(n % BASE, fd);
	}
}

/* ////
#include <fcntl.h>

int	main()
{
	int fd = open("test", O_RDWR | O_APPEND);

	ft_putnbr_fd(-123, fd);
	close(fd);
	return (0);
}
*/ ////
