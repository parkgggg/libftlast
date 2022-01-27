/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:27:10 by gupark            #+#    #+#             */
/*   Updated: 2021/12/14 15:33:52 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;
	unsigned char	target;
	size_t			i;

	sp = (unsigned char *)s;
	target = c;
	i = 0;
	while (i++ < n)
	{
		if (*sp == target)
			return (sp);
		sp++;
	}
	return (0);
}
