/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 12:33:26 by sbenning          #+#    #+#             */
/*   Updated: 2017/04/29 17:31:13 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void		*malloc(size_t size)
{
	FT_MLOG(__FILE__, __LINE__, __func__);
	void	*ptr;

	ptr = NULL;
	ptr = mmap(0, size, PROT_WRITE | PROT_READ, MAP_ANON | MAP_PRIVATE, -1, 0);
	return (ptr);
	(void)size;
}
