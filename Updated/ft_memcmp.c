/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@42berlin.de>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:11:21 by dlu               #+#    #+#             */
/*   Updated: 2023/04/26 01:41:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0 && n--)
		if (*(t_uc *) s1++ != *(t_uc *) s2++)
			return (*(t_uc *)(s1 - 1) - *(t_uc *)(s2 - 1));
	if (n == 0)
		return (0);
	return (*(t_uc *) s1 - *(t_uc *) s2);
}