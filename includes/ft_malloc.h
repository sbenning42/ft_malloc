/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 12:32:12 by sbenning          #+#    #+#             */
/*   Updated: 2017/04/29 17:31:36 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

/*
**			define section
*/

//# define FT_MUST_LOG

# ifdef FT_MUST_MLOG
#  define	FT_MLOG(F, L, f) ft_fprintf(2, "%s: (%s Line %03d)\n", f, F, L)
# else
#  define	FT_MLOG(F, L, f) (void)F;(void)L;(void)f
# endif

# include "libft.h"
# include <sys/mman.h>

/*
**			ft_malloc.c
*/

void		*malloc(size_t size);

#endif
