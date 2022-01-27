/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:57:30 by gupark            #+#    #+#             */
/*   Updated: 2021/12/16 16:39:09 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*p;
	unsigned char	*p_set;
	size_t			i;

	p = malloc(nitems * size);
	i = 0;
	if (!p)
		return (0);
	p_set = (unsigned char *)p;
	while (i < nitems * size)
	{
		p_set[i] = 0;
		i++;
	}
	return (p);
}
