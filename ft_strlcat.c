/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:21:18 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/30 02:16:18 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

/*size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(dest);
	if (!len)
	{
		ft_strcat(dest, src);
		return (ft_strlen(src));
	}
	if (n <= len)
		return (ft_strlen(src) + n);
	ft_strncat(dest, src, n - len - 1);
	return (len + ft_strlen(src));
}*/

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    char *d;
    char *s;
    size_t n;
    size_t dlen;
    size_t rest;
    d = dst;
    s = (char *)src;
    n = size;
    while (*d != '\0' && n--)
        d++;
    dlen = d - dst;
    rest = size - dlen;
    if (rest == 0)
        return (dlen + ft_strlen(src)); 
    while (*s != '\0' && rest > 1)
    {
        *d = *s;
        d++;
        rest--;
        s++;
    }
    *d = '\0';
    return (dlen + ft_strlen(src));
}
