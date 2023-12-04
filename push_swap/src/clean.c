/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmartir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:45:04 by grmartir          #+#    #+#             */
/*   Updated: 2023/06/15 21:45:06 by grmartir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	clear_all(t_mem *mem)
{
	ft_free_list(&(mem->a));
	ft_free_list(&(mem->b));
}

void	exit_error(t_mem *mem)
{
	ft_puterr("Error");
	clear_all(mem);
	exit(EXIT_FAILURE);
}

void	ft_error(void)
{
	ft_puterr("Error");
	exit(1);
}
