/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:40:41 by gupark            #+#    #+#             */
/*   Updated: 2021/12/16 17:07:45 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (dest == src || len == 0)
		return (dest);
	if (dest < src)
	{
		d = (unsigned char *)dest;
		s = (unsigned char *)src;
		while (i++ < len)
			*d++ = *s++;
	}
	else
	{
		d = (unsigned char *)dest + (len - 1);
		s = (unsigned char *)src + (len - 1);
		while (i++ < len)
			*d-- = *s--;
	}
	return (dest);
}
