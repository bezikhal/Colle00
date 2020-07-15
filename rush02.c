/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:07:15 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/15 12:07:21 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void rush(int x, int y)
{
  int   i;
  int   j;

  i = 1;
  while(i <= y)
  {
    j= 1;
    while (j <= x)
    {
      if ((i == 1 || i == y) && (j == 1 || j == x ) )
      {
        ft_putchar('A');
      }
      else if ((i > 1 || i < y) && (j == 1 || j == x))
      {
        ft_putchar('B');
      }
      else if ((i == 1 || i == y) && (j > 1 || j < x))
      {
        ft_putchar('C');
      }
      else if ((i != 1 || i != y) && (j != 1 || j != y))
      {
        ft_putchar(' ');
      }
      j++;
    }
    ft_putchar('\n');
      i++;
  }
}
