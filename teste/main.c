/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 04:23:49 by fviana            #+#    #+#             */
/*   Updated: 2022/02/05 15:52:31 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush01.c"
#include "ft_putchar.c"


void rush(int *x);
int main(void)
{
	int *v;
	int a;
	a = 5;
	v = &a;
	
	rush(v);
	return(0);
}