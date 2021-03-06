/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:17:40 by jleem             #+#    #+#             */
/*   Updated: 2021/01/30 12:24:49 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include "vector.h"
# include "ray.h"
# include "engine.h"

void	vec3_print(t_vec3 v);
void	vec2_print(t_vec2 v);
void	vec2i_print(t_vec2i v);

void	init_debug_layer(void (*fp)(int, int, int));
void	debug_point(t_vec3 v);
void	debug_ray(t_ray *ray);

#endif
