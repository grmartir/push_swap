/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmartir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:48:03 by grmartir          #+#    #+#             */
/*   Updated: 2023/06/15 21:48:05 by grmartir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	double_rotate(t_mem *mem, int *rot_a, int *rot_b)
{
	while (*rot_a > 0 && *rot_b > 0)
	{
		(*rot_a)--;
		(*rot_b)--;
		rotate_b_a(mem);
	}
	while (*rot_a < 0 && *rot_b < 0)
	{
		(*rot_a)++;
		(*rot_b)++;
		rev_rotate_b_a(mem);
	}
}

void	rotate(t_mem *mem, int rot_a, int rot_b)
{
	double_rotate(mem, &rot_a, &rot_b);
	while (rot_a > 0)
	{
		rot_a--;
		rotate_a(mem);
	}
	while (rot_a < 0)
	{
		rot_a++;
		rev_rotate_a(mem);
	}
	while (rot_b > 0)
	{
		rot_b--;
		rotate_b(mem);
	}
	while (rot_b < 0)
	{
		rot_b++;
		rev_rotate_b(mem);
	}
}
