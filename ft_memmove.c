/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clancini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:01:02 by clancini          #+#    #+#             */
/*   Updated: 2023/11/05 07:02:11 by clancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if(!dest && !src)
		return (NULL);
	
	if(n == 0 || dest == src)
		return (dest);
	
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (tmp2 < tmp)
	{
		tmp2 = tmp2 + n - 1;
		tmp = tmp + n - 1;
		while (n--)
			*tmp-- = *tmp2--;
	}
	else
	{
		while (n--)
			*tmp++ = *tmp2++;
	}
	return (dest);
}
