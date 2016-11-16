/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 01:15:44 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/15 00:38:33 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int 	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if ((str[i]) == c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
