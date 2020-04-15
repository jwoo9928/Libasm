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
	char		*ptr;
	const unsigned char	*ptr2;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	ptr = (char *)dst;
	ptr2 = (char *)src;
	while (len-- > 0)
		(ptr)[len] = (ptr2)[len];
	return (dst);
}
