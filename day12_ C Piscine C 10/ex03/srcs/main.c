/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 12:08:37 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/15 12:08:37 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_args_parser.h"

int		main(int argc, char **argv)
{
	if (!parse_args(argv, argc))
		return (1);
	return (0);
}
