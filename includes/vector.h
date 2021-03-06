/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:27:46 by jleem             #+#    #+#             */
/*   Updated: 2021/01/29 00:58:20 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

typedef struct	s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

t_vec3			vec3(float x, float y, float z);
t_vec3			vec3_add(t_vec3 u, t_vec3 v);
t_vec3			vec3_sub(t_vec3 u, t_vec3 v);
t_vec3			vec3_mul(t_vec3 v, float k);
float			vec3_dot(t_vec3 u, t_vec3 v);

float			vec3_square(t_vec3 v);
float			vec3_length(t_vec3 v);
t_vec3			vec3_norm(t_vec3 v);
t_vec3			vec3_cross(t_vec3 u, t_vec3 v);
t_vec3			vec3_reflect(t_vec3 v, t_vec3 e_n);

typedef struct	s_vec2
{
	float		x;
	float		y;
}				t_vec2;

t_vec2			vec2(float x, float y);
t_vec2			vec2_add(t_vec2 u, t_vec2 v);
t_vec2			vec2_sub(t_vec2 u, t_vec2 v);
t_vec2			vec2_mul(t_vec2 v, float k);
float			vec2_dot(t_vec2 u, t_vec2 v);

float			vec2_square(t_vec2 v);
float			vec2_length(t_vec2 v);
t_vec2			vec2_norm(t_vec2 v);

typedef struct	s_vec2i
{
	int			x;
	int			y;
}				t_vec2i;

t_vec2i			vec2i(int x, int y);
t_vec2i			vec2i_add(t_vec2i u, t_vec2i v);
t_vec2i			vec2i_sub(t_vec2i u, t_vec2i v);
t_vec2i			vec2i_mul(t_vec2i v, int k);
int				vec2i_dot(t_vec2i u, t_vec2i v);

int				vec2i_square(t_vec2i v);
float			vec2i_length(t_vec2i v);

#endif
