/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmartir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:48:24 by grmartir          #+#    #+#             */
/*   Updated: 2023/06/15 21:48:27 by grmartir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	swap_a(t_mem *mem)
{
	swap_private(&(mem->a));
	if (mem->print)
		ft_putstr("sa");
}

void	swap_b(t_mem *mem)
{
	swap_private(&(mem->b));
	if (mem->print)
		ft_putstr("sb");
}

void	swap_b_a(t_mem *mem)
{
	swap_private(&(mem->b));
	swap_private(&(mem->a));
	if (mem->print)
		ft_putstr("ss");
}

void	push_b(t_mem *mem)
{
	push_top_x1_on_x2(&(mem->a), &(mem->b));
	if (mem->print)
		ft_putstr("pb");
}

void	push_a(t_mem *mem)
{
	push_top_x1_on_x2(&(mem->b), &(mem->a));
	if (mem->print)
		ft_putstr("pa");
}
