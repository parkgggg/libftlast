/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:40:41 by gupark            #+#    #+#             */
/*   Updated: 2022/01/31 21:32:52 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		d = (unsigned char *)dest;
		s = (unsigned char *)src;
		while (i++ < num)
			*d++ = *s++;
	}
	else
	{
		d = (unsigned char *)dest + (num - 1);
		s = (unsigned char *)src + (num - 1);
		while (i++ < num)
			*d-- = *s--;
	}
	return (dest);
}
