/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japark <astro9928@o.cnu.ac.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 14:52:07 by japark            #+#    #+#             */
/*   Updated: 2020/04/11 17:23:25 by japark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	i = -1;
	ptr = (unsigned char *)src;
	ptr2 = (const unsigned char *)dst;
	if (ptr < ptr2)
		while ((int)(--len) >= 0)
			*(ptr2 + len) = *(ptr + len);
	else
		while (++i < len)
			*(ptr2 + i) = *(ptr + i);
	return (dst);
}
