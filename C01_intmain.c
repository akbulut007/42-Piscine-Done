/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C01_intmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:21:33 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/09 18:47:21 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*`
int	main()
{
	int	*nbr;
	int	number;
	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
int	main()
{
	int n;
	int *nbr8;
	int **nbr7;
	int ***nbr6;
	int ****nbr5;
	int *****nbr4;
	int ******nbr3;
	int *******nbr2;
	int ********nbr1;
	int *********nbr;
	n = 21;
	
	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	
	ft_ultimate_ft(nbr);
	printf("%d", n);	
	return 0;
}
int	main()
{
	int	x;
	int	y;
	
	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}
int main()
{
    int a = 10; 
    int b = 3;  
    int div;    
    int mod;    

    ft_div_mod(a, b, &div, &mod); 

    printf("Division of %d by %d is: %d\n", a, b, div); 
    printf("Modulus of %d by %d is: %d\n", a, b, mod);   

    return 0; 
}

int main()
{
	int x;
	int	y;
	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}
int	main()
{
	char *c = "Hello";
	ft_putstr(c);
}
int	main()
{
	char *c = "Hello";
	printf("%d", ft_strlen(c));
}
int	main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}	
int main() {
    int tab[6] = {7, 6, 3, 4, 2, 5};
    int size = 6;
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return 0;
}	
