/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:10:33 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/10 13:33:49 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "image.h"

#include <stdbool.h>
#include "mlx.h"

/**
 * @brief init image data address
 * 
 * @param img img struct
 * @return false if failed
 */
bool	ft_image_init(t_img *img)
{
	img->data = mlx_get_data_addr(img->ptr, &img->bpp, &img->line, &img->end);
	if (!img->data)
		return (false);
	return (true);
}
