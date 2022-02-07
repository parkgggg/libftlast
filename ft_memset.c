/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:40:50 by gupark            #+#    #+#             */
/*   Updated: 2022/02/07 18:44:28 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*c;
	unsigned char	v;
	size_t			i;

	c = (unsigned char *)ptr;
	v = value;
	i = 0;
	while (i++ < num)
	{
		*c = v;
		c++;
	}
	return (ptr);
}
