/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter_alex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <rayane.qouchich@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:32:42 by rqouchic          #+#    #+#             */
/*   Updated: 2020/03/03 20:38:47 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int main(int argc, char **argv)
{
	int tmp[300];
	int i = 0;
	int j = 0;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i])
	{
		tmp[(int)(argv[2][i])] = 1;
		i++;
	}
	while (argv[1][j])
	{
		if (tmp[(int)(argv[1][j])] == 1)
		{
			tmp[(int)(argv[1][j])] = 0;
			write(1, &argv[1][j], 1);
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
