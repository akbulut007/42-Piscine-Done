/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C02_intmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:23:11 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/12 16:24:06 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <stdio.h>


int main()
{
    char src[] = "Hello, World!";
    char dest[50]; 
    ft_strcpy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}



int main()
{
    char src[] = "Hello, World!";
    char dest[50]; 
    unsigned int n = 5; 

    ft_strncpy(dest, src, n);
    printf("Source: %s\n", src);
    printf("Destination after strncpy: %s\n", dest);

    return 0;
}

int main(void)
{
    char a[] = "fonnjno";
    printf("Result for 'fonnjno': %d\n", ft_str_is_alpha(a)); // Should print 1

    char b[] = "fonn42342jno";
    printf("Result for 'fonn42342jno': %d\n", ft_str_is_alpha(b)); // Should print 0

    return 0;
}



int main(void)
{
	int is_numeric;

	char a[] = "1234567890"; 
	is_numeric = ft_str_is_numeric(a);
	printf("Result for '1234567890': %d\n", is_numeric); 

	char b[] = "1234abc567"; 
	is_numeric = ft_str_is_numeric(b);
	printf("Result for '1234abc567': %d\n", is_numeric); 

	return 0;
}



int main(void)
{
	int is_lowercase;

	char a[] = "hello"; 
	is_lowercase = ft_str_is_lowercase(a);
	printf("Result for 'hello': %d\n", is_lowercase); 

	char b[] = "Hello1World"; 
	is_lowercase = ft_str_is_lowercase(b);
	printf("Result for 'HelloWorld': %d\n", is_lowercase); 

	char c[] = ""; 
	is_lowercase = ft_str_is_lowercase(c);
	printf("Result for an empty string: %d\n", is_lowercase); 

	return 0;
}


int main(void)
{
	int is_uppercase;

	char a[] = "HELLO"; 
	is_uppercase = ft_str_is_uppercase(a);
	printf("Result for 'HELLO': %d\n", is_uppercase); 

	char b[] = "HelloWorld"; 
	is_uppercase = ft_str_is_uppercase(b);
	printf("Result for 'HelloWorld': %d\n", is_uppercase); 

	char c[] = ""; 
	is_uppercase = ft_str_is_uppercase(c);
	printf("Result for an empty string: %d\n", is_uppercase);

	return 0;
}


int main(void)
{
	int is_printable;

	char a[] = "Hello, World!"; 
	is_printable = ft_str_is_printable(a);
	printf("Result for 'Hello, World!': %d\n", is_printable); 

	char b[] = "Hello\nWorld"; 
	is_printable = ft_str_is_printable(b);
	printf("Result for 'Hello\\nWorld': %d\n", is_printable); 

	char c[] = ""; 
	is_printable = ft_str_is_printable(c);
	printf("Result for an empty string: %d\n", is_printable); 

	return 0;
}



int main()
{
    char str1[] = "hello i am yusuf";
    printf ("before: %s\n", str1);
    ft_strupcase(str1);
    printf ("after: %s\n", str1);
}


int main()
{
	char str1[5] = "HELLO";
	printf ("before: %s\n", str1);
	ft_strlowcase(str1);
	printf("after: %s\n", str1);
	return (0);
}


