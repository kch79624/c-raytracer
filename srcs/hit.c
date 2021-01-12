/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:44:33 by jleem             #+#    #+#             */
/*   Updated: 2021/01/13 03:03:35 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hit.h"

t_hit			hit_zero(void)
{
	t_hit	hit;

	hit.object = (void *)0;
	hit.distance = 0;
	hit.location = make_vec3(0, 0, 0);
	return (hit);
}
