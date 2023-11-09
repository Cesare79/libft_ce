/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capo <capo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:27:23 by clancini          #+#    #+#             */
/*   Updated: 2023/10/24 19:32:45 by capo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	if(n == 0)
		return (s);
	if(s == NULL)
		return (NULL);
	if (n > 0)
	{
		while (n--)
			*(unsigned char *)s++ = (unsigned char)c;
	}
	return (s);
}

