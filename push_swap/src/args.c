/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmartir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:44:00 by grmartir          #+#    #+#             */
/*   Updated: 2023/06/15 21:44:11 by grmartir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	read_args(int argc, char **argv, t_mem *mem, int i)
{
	int	j;
	int	prev_space;

	prev_space = 1;
	while (i < argc)
	{
		prev_space = 1;
		j = -1;
		while (argv[i][++j])
		{
			if ((argv[i][j] != '+' && argv[i][j] != '-' && argv[i][j] != ' '
				&& !ft_isdigit(argv[i][j])) || ((argv[i][j] == '-' || \
				argv[i][j] == '+') && (ft_isdigit(argv[i][j - 1]) \
				&& ft_isdigit(argv[i][j + 1]))))
				exit_error(mem);
			if (prev_space == 1 && argv[i][j] != ' ')
			{
				push_init(&(mem->a), ft_atoi(argv[i] + j, mem), -1, mem);
				prev_space = 0;
			}
			prev_space = argv[i][j] == ' ';
		}
		i++;
	}
}
