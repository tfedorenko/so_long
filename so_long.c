/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:08:40 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/05 17:56:09 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilbx/mlx.h"
#include "so_long.h"
#include "Libft/libft.h"
#include <fcntl.h>
#include "get_next_line/get_next_line.h"

char	*get_input(int fd)
{
	char	*get_from_file;
	char	**input_map;
	int		num_of_lines;
	int		fd;
	int		i;
	// int		f;

	fd = open("map.ber", O_RDONLY);
	num_of_lines = 0;
	get_from_file = get_next_line(fd);
	while (&get_input)
	{
		num_of_lines++;
		get_from_file = get_next_line(fd);
	}
	get_from_file = malloc (sizeof(char **) * num_of_lines);
	close(fd);
	fd = open("map.ber", O_RDONLY);
	i = 0;
	while (i < num_of_lines)
	{
		input_map[i] = get_next_line(fd);
	}
	return (*input_map);
}

// void check_input (map)

int	main(int argc, char *argv[])
{
	int	fd;
	// char	*input_map;
	char	*arr;

	arr = get_input(fd);
	// arr = malloc(sizeof(char **) * 10);
	// fd = open(argv[1], O_RDONLY);
	// int num_of_lines = 0;
	// input_map = get_input(fd);
	// // while(input_map)
	// {
	// 	num_of_lines++;
	// 	input_map = get_input(fd);
	// }
	// arr = malloc(sizeof(char **) * 10);
	// close(fd);
	// fd = open(argv[1], O_RDONLY);
	// for (int j = 0; j < num_of_lines; j++)
	// {
	// 	arr[j] = get_input(fd);
	// 	// free(output1);
	// }
	for(int i = 0; i < 10; i++)
	{
		printf("%c", arr[i]);
	}
	return (0);
}
