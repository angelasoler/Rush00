/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviana <fviana@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 04:23:49 by fviana            #+#    #+#             */
/*   Updated: 2022/02/05 14:55:08 by fviana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush01.c"
#include "ft_putchar.c"


void rush(int x, int y);
int main(void){

	rush(5,5);
	return(0);
}