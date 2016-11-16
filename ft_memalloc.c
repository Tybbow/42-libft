/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 04:49:59 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/16 08:14:36 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void 	*tmp;

	tmp = (void *)malloc(size);
	if (tmp)
		ft_bzero(tmp, size + 1);
	return (tmp);
}