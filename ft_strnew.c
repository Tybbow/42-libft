/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 05:02:58 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/15 15:54:48 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}*/

char	*ft_strnew(size_t size)
{
	char	*text;

	text = (char *)malloc((size + 1) * sizeof(char));
	if (!text)
		return (NULL);
	ft_memset(text, '\0', size + 1);
	return (text);
}
