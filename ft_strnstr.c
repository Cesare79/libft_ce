/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clancini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:01:38 by clancini          #+#    #+#             */
/*   Updated: 2023/11/05 07:02:11 by clancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *strchr(const char *s, int c)
{
	if(s == NULL)
		return (NULL);
	while(*s)
	{
		if(*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);e
}
