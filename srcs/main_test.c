/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 12:36:15 by sbenning          #+#    #+#             */
/*   Updated: 2017/04/29 17:34:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			main(void)
{
	void	*ptr;
   
	ptr	= malloc(5);
	free(ptr);

	return (0);
}