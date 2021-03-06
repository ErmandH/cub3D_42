/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eharuni < eharuni@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:12 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/08 22:35:29 by eharuni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3D.h"

void	free_all(t_player *pl)
{
	if (pl->data->no)
		free(pl->data->no);
	if (pl->data->so)
		free(pl->data->so);
	if (pl->data->we)
		free(pl->data->we);
	if (pl->data->ea)
		free(pl->data->ea);
	ft_lstclear(&pl->data->head, &free_content);
	free(pl->data->map);
	free(pl->data);
	free(pl->pos);
	free(pl->dir);
	free(pl->mlx);
	free(pl);
}

void	free_content(void *content)
{
	free(content);
}
