/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clancini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 06:58:46 by capo              #+#    #+#             */
/*   Updated: 2023/11/05 07:02:11 by clancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void       *ft_memchr(const void *s, int c, size_t n)
{
	if(s == NULL || n == 0)
		return (NULL);


	while(n--)
	{
		if(*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
}