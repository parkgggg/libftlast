/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:40:20 by gupark            #+#    #+#             */
/*   Updated: 2022/01/31 21:43:39 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!n)
		return (0);
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while (d[i] == s[i] && i < n - 1)
		i++;
	return (d[i] - s[i]);
}
