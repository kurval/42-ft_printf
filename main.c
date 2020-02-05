/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <vkurkela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:19:58 by vkurkela          #+#    #+#             */
/*   Updated: 2020/02/05 10:57:42 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\nTESTS\n");

	printf("1. TEST print string without flags\n");
	printf("re: hello world!\n");
	ft_printf("ft: hello world!\n");

	printf("\n2. TEST i and d flags\n");
	printf("re: %d\n", 2121);
	ft_printf("ft: %d\n", 2121);
	printf("re: %i\n", 2121);
	ft_printf("ft: %i\n", 2121);
	printf("re: %d\n", printf("%i\n", -123));
	printf("ft: %d\n", ft_printf("%i\n", -123));

	printf("\n");	
	printf("re: %d\n", printf("%d\n", 1234));
	printf("ft: %d\n", ft_printf("%d\n", 1234));

	printf("\n");
	printf("re: %d\n", printf("12345\n"));
	printf("ft: %d\n", ft_printf("12345\n"));

	printf("return value re: %d\n", printf("seppo %d ja suppo %d", 56, 57));
	printf("return value ft: %d\n", ft_printf("seppo %d ja suppo %d", 56, 57));

	printf("\n3. TEST print char and linebreak\n");
	printf("re: %d\n", printf("%c\n", 'x'));
	printf("ft: %d\n", ft_printf("%c\n", 'x'));

	printf("\n4. TEST print str\n");
	printf("re: %d\n", printf("%s\n", "hello world!"));
	printf("ft: %d\n", ft_printf("%s\n", "hello world!"));
	printf("re: %d\n", printf("%s", ""));
	printf("ft: %d\n", ft_printf("%s", ""));

	printf("\n5. TEST o-flag\n");

	printf("re: %d\n" , printf("%o\n", -126));
	printf("ft: %d\n" , ft_printf("%o\n", -126));
	printf("re: %o\n", 133);
	ft_printf("ft: %o\n", 133);
	printf("re: %o\n", 0);
	ft_printf("ft: %o\n", 0);

	ft_printf("@moulitest: %.o %.0o\n", 0, 0);
	printf("@moulitest: %.o %.0o\n", 0, 0);

	printf("\n6. TEST x and X-flags\n");

	printf("re: %X\n", -16);
	ft_printf("ft: %X\n", -16);
	printf("re: %x\n", 31);
	ft_printf("ft: %x\n", 31);
	printf("re: %X\n", 31);
	ft_printf("ft: %X\n", 31);
	printf("re: %x\n", 0);
	ft_printf("ft: %x\n", 0);

	printf("\n7. TEST u-flag\n");

	printf("re: %u\n", 123);
	ft_printf("ft: %u\n", 123);

	printf("re: %u\n", -1);
	ft_printf("ft: %u\n", -1);

	printf("\n8. TEST p-flag\n");

	int *p;
	int n;

	n = -19;
	p = &n;
	printf("re: %p\n", p);
	ft_printf("ft: %p\n", p);

	char *p2;
	char c;

	c = 'c';
	p2 = &c;
	printf("re: %p\n", p2);
	ft_printf("ft: %p\n", p2);

	printf("\n9. TEST hh-flag with i and d\n");

	printf("re -hh %hhi\n", c);
	ft_printf("ft -hh %hhi\n", c);

	printf("re -hh %hhd\n", c);
	ft_printf("ft -hh %hhd\n", c);

	printf("\n10. TEST hh-flag with u\n");

	c = 'G';

	printf("re -hh %hhu\n", c);
	ft_printf("ft -hh %hhu\n", c);

	printf("\n11. TEST hh-flag with o\n");

	c = 'f';

	printf("re -hh %hho\n", c);
	ft_printf("ft -hh %hho\n", c);

	printf("\n12. TEST hh-flag with x and X\n");

	c = 'S';

	printf("re -hh %hhx\n", c);
	ft_printf("ft -hh %hhx\n", c);

	printf("re -hh %hhX\n", c);
	ft_printf("ft -hh %hhX\n", c);

	short b;

	b = -14;

	printf("\n13. TEST h-flag with i and d\n");

	printf("re -h %hi\n", b);
	ft_printf("ft -h %hi\n", b);

	printf("re -h %hd\n", b);
	ft_printf("ft -h %hd\n", b);

	printf("\n14. TEST h-flag with u\n");

	b = -9;

	printf("re -h %hu\n", b);
	ft_printf("ft -h %hu\n", b);

	printf("\n14. TEST h-flag with o\n");

	b = -2;

	printf("re -h %ho\n", b);
	ft_printf("ft -h %ho\n", b);

	printf("\n15. TEST h-flag with x and X\n");

	b = -31;

	printf("re -h %hx\n", b);
	ft_printf("ft -h %hx\n", b);

	printf("re -h %hX\n", b);
	ft_printf("ft -h %hX\n", b);

	printf("\n16. TEST l-flag with i and d\n");

	long l;
	l = 9223372036854775807;

	printf("re -l %li\n", l);
	ft_printf("ft -l %li\n", l);

	printf("re -l %ld\n", l);
	ft_printf("ft -l %ld\n", l);

	printf("\n17. TEST l-flag with u\n");

	unsigned long ul;
	ul = 9223372036854775807;

	printf("re -l %lu\n", ul);
	ft_printf("ft -l %lu\n", ul);

	printf("\n18. TEST l-flag with o\n");

	printf("re -l %lo\n", l);
	ft_printf("ft -l %lo\n", l);

	printf("\n19. TEST l-flag with x and X\n");

	printf("re -l %lx\n", l);
	ft_printf("ft -l %lx\n", l);

	printf("re -l %lX\n", l);
	ft_printf("ft -l %lX\n", l);

	printf("\n20. TEST l-flag with i and d\n");

	long long ll;
	ll = 9223372036854775807;

	printf("re -ll %lli\n", ll);
	ft_printf("ft -ll %lli\n", ll);

	printf("re -ll %lld\n", ll);
	ft_printf("ft -ll %lld\n", ll);

	printf("\n21. TEST ll-flag with u\n");

	unsigned long long ull;
	ull = 9223372036854775807;

	printf("re -ll %llu\n", ull);
	ft_printf("ft -ll %llu\n", ull);

	printf("\n22. TEST ll-flag with o\n");

	printf("re -ll %llo\n", ull);
	ft_printf("ft -ll %llo\n", ull);

	printf("\n23. TEST ll-flag with x and X\n");

	printf("re -ll %llx\n", ull);
	ft_printf("ft -ll %llx\n", ull);

	printf("re -ll %llX\n", ull);
	ft_printf("ft -ll %llX\n", ull);

	printf("\n24. TEST %%-flag\n");

	printf("re: %d%%\n", 3);
	ft_printf("ft: %d%%\n", 3);

	printf("\n25. TEST width field\n");

	printf("\ntest width field d\n");

	printf("re %*d\n", 5, 114);
	ft_printf("ft %*d\n", 5, 114);
	printf("re %6d\n", -15);
	ft_printf("ft %6d\n", -15);

	printf("\ntest width field c\n");

	printf("re %*c\n", 5, 'c');
	ft_printf("ft %*c\n", 5, 'c');
	printf("re %6c\n", 'c');
	ft_printf("ft %6c\n", 'c');

	printf("\ntest width field percent\n");

	printf("re %d\n", printf("re %*%\n", 5));
	printf("ft %d\n", ft_printf("ft %*%\n", 5));
	printf("re %d\n", printf("re %6%\n"));
	printf("ft %d\n", ft_printf("ft %6%\n"));

	printf("\ntest width field u\n");

	printf("re %*u\n", 5, 132);
	ft_printf("ft %*u\n", 5, 132);
	printf("re %6u\n", 31);
	ft_printf("ft %6u\n", 31);

	printf("\ntest width field o\n");

	printf("re: %d\n", printf("%*o\n", 5, 132));
	printf("ft: %d\n", ft_printf("%*o\n", 5, 132));
	printf("re %6o\n", 31);
	ft_printf("ft %6o\n", 31);

	printf("\ntest width field x\n");

	printf("re %*x\n", 5, 132);
	ft_printf("ft %*x\n", 5, 132);
	printf("re %6x\n", 311);
	ft_printf("ft %6x\n", 311);

	printf("\ntest width field X\n");

	printf("re %*X\n", 5, 132);
	ft_printf("ft %*X\n", 5, 132);
	printf("re %6X\n", 31);
	ft_printf("ft %6X\n", 31);

	printf("\ntest width field s\n");

	printf("re: %d\n", printf("%*s\n", 15, "seppo"));
	printf("ft: %d\n", ft_printf("%*s\n", 15, "seppo"));
	printf("re %10s\n", "seppo");
	ft_printf("ft %10s\n", "seppo");

	printf("\ntest width field p\n");

	char	*ptr;

	ptr = "asd";

	printf("re: %d\n", printf("%*p\n", 20, ptr));
	printf("ft: %d\n" ,ft_printf("%*p\n", 20, ptr));
	printf("re %18p\n", ptr);
	ft_printf("ft %18p\n", ptr);

	printf("\n26. TEST precission field\n");

	char *spr;

	spr = "adsddsdsdsa";

	printf("re return: %d\n", printf("%.7d\n", 4));
	printf("ft return: %d\n", ft_printf("%.7d\n", 4));
	printf("re tulostaa: %.0d\n", 4);
	ft_printf("ft tulostaa: %.0d\n", 4);
	printf("re return value: %d\n", printf("%.*d\n", 7, -4));
	printf("ft return value: %d\n", ft_printf("%.*d\n", 7, -4));
	printf("re return value: %d\n", printf("%.7d\n", -4));
	printf("ft return value: %d\n", ft_printf("%.7d\n", -4));

	printf("re tulostaa u: %.7u\n", 14);
	ft_printf("ft tulostaa u: %.7u\n", 14);

	printf("re tulostaa percent: %.7%\n");
	ft_printf("ft tulostaa percent: %.7%\n");

	printf("re return: %d\n", printf("%.7s\n", spr));
	printf("ft return: %d\n", ft_printf("%.7s\n", spr));

	printf("re tulostaa o: %.7o\n", 7);
	ft_printf("ft tulostaa o: %.7o\n", 7);

	printf("re return: %d\n", printf("re tulostaa x: %.7x\n", 31));
	printf("ft return: %d\n", ft_printf("ft tulostaa x: %.7x\n", 31));

	printf("re tulostaa X: %.7X\n", 31);
	ft_printf("ft tulostaa X: %.7X\n", 31);

	printf("re return: %d\n", printf("%.012d\n", 3));
	printf("ft return: %d\n", ft_printf("%.012d\n", 3));

	printf("real return value: %d\n", printf("%.12d\n", 3));
	printf("real return value: %d\n", ft_printf("%.12d\n", 3));

	printf("precision: %.3s\n", "abcdef");
	ft_printf("precision: %.3s\n", "abcdef");

	printf("precision: %.10d\n", 12);
	ft_printf("precision: %.10d\n", 12);

	printf("precision: %.010d\n", 12);
	ft_printf("precision: %.010d\n", 12);

	printf("re: %.*s\n", 3, "abcdef");
	ft_printf("ft: %.*s\n", 3, "abcdef");


	printf("\n27. TEST zero flag\n");

	printf("return value re: %d\n", printf("%06d\n", 115));
	printf("return value ft: %d\n", ft_printf("%06d\n", 115));

	printf("re %013d\n", 115);
	ft_printf("ft %013d\n", 115);

	printf("re %013o\n", 115);
	ft_printf("ft %013o\n", 115);

	printf("re %013x\n", 115);
	ft_printf("ft %013x\n", 115);

	printf("re %0x\n", 115);
	ft_printf("ft %0x\n", 115);

	printf("re %05d\n", -7);
	ft_printf("ft %05d\n", -7);

	printf("re %015%\n");
	ft_printf("ft %015%\n");

	printf("re %05u\n", 117);
	ft_printf("ft %05u\n",117);

	printf("re: %010d\n", 1);
	ft_printf("ft: %010d\n", 1);

	printf("re %0*d\n", 5, 114);
	ft_printf("ft %0*d\n", 5, 114);

	printf("\n28. TEST plus flag\n");

	printf("re return value: %d\n", printf("%+d\n",13));
	printf("ft return value: %d\n", ft_printf("%+d\n",13));

	printf("re return value: %d\n", printf("%+7d\n",13));
	printf("ft return value: %d\n", ft_printf("%+7d\n",13));

	printf("re return value: %d\n", printf("%+07d\n",13));
	printf("ft return value: %d\n", ft_printf("%+07d\n",13));

	printf("re return value: %d\n", printf("%+d\n",-13));
	printf("ft return value: %d\n", ft_printf("%+d\n",-13));

	printf("re return value: %d\n", printf("%+7d\n",-13));
	printf("ft return value: %d\n", ft_printf("%+7d\n",-13));

	printf("re return value: %d\n", printf("%+07d\n",-13));
	printf("ft return value: %d\n", ft_printf("%+07d\n",-13));

	printf("re %d\n", printf("%+13i", -117));
	printf("re %d\n", ft_printf("%+13i", -117));

	printf("re %d\n", printf("%+-13i", 117));
	printf("re %d\n", ft_printf("%+-13i", 117));

	printf("re: %+015.10d\n", 12);
	ft_printf("ft: %+015.10d\n", 12);

	printf("re: %+015.20d\n", 12);
	ft_printf("ft: %+015.20d\n", 12);

	printf("re: %+015.15d\n", 12);
	ft_printf("ft: %+015.15d\n", 12);
	
	printf("\n29. TEST space flag\n");

	printf("return value re: %d\n", printf("% d\n", 115));
	printf("return value ft: %d\n", ft_printf("% d\n", 115));

	printf("re % d\n", 115);
	ft_printf("ft % d\n", 115);

	printf("re % 06d\n", 115);
	ft_printf("ft % 06d\n", 115);

	printf("re % 05d\n", 0);
	ft_printf("ft % 05d\n", 0);

	printf("re % 05d\n", -7);
	ft_printf("ft % 05d\n", -7);

	printf("re % 05d\n", 1560133635);
	ft_printf("ft % 05d\n", 1560133635);

	printf("re % 05d\n", -2035065302);
	ft_printf("ft % 05d\n", -2035065302);

	printf("re %d\n", printf("% 13i", -117));
	printf("re %d\n", ft_printf("% 13i", -117));

	printf("re %d\n", printf("% 13i", 117));
	printf("re %d\n", ft_printf("% 13i", 117));

	printf("% 05d\n", -7);
	ft_printf("% 05d\n", -7);

	printf("re %d\n", printf("re: % 015.10d\n", 12));
	printf("ft %d\n", ft_printf("ft: % 015.10d\n", 12));

	printf("re: %015.15u\n", 12);
	ft_printf("ft: %015.15u\n", 12);

	printf("\n30. TEST hash flag\n");

	printf("re %#o\n", 13);
	ft_printf("ft %#o\n", 13);

	printf("re %#o\n", 0);
	ft_printf("ft %#o\n", 0);

	printf("re %#x\n", 13);
	ft_printf("ft %#x\n", 13);

	printf("re %#X\n", 13);
	ft_printf("ft %#X\n", 13);

	printf("%#5o\n", 11);
	ft_printf("%#5o\n", 11);

	printf("%#5x\n", 11);
	ft_printf("%#5x\n", 11);

	printf("%#9X\n", 111);
	ft_printf("%#9X\n", 111);

	printf("%#09X\n", 111);
	ft_printf("%#09X\n", 111);

	printf("%#9x\n", 111);
	ft_printf("%#9x\n", 111);

	printf("%#09x\n", 111);
	ft_printf("%#09x\n", 111);

	printf("%#5.0o.\n", 0);
	ft_printf("%#5.0o.\n", 0);

	printf("%#-8.5X.\n", 34);
	ft_printf("%#-8.5X.\n", 34);

	printf("%-7x.\n", 33);
	ft_printf("%-7x.\n", 33);

	printf("%#-8.3x.\n", 8375);
	ft_printf("%#-8.3x.\n", 8375);
	
	printf("%#08.5x.\n", 34);
	ft_printf("%#08.5x.\n", 34);

	printf("%#05o\n", 43);
	ft_printf("%#05o\n", 43);

	printf("%#03o\n", 0);
	ft_printf("%#03o\n", 0);

	printf("%#03o\n", 0);
	ft_printf("%#03o\n", 0);

	printf("ft %d\n", printf("%#8.5o.\n", 1));
	printf("ft %d\n", ft_printf("%#8.5o.\n", 1));

	printf("ft %d\n", printf("%#8.5x.\n", 1));
	printf("ft %d\n", ft_printf("%#8.5x.\n", 1));

	printf("ft %d\n", printf("%#8.2x.\n", 123));
	printf("ft %d\n", ft_printf("%#8.2x.\n", 123));

	printf("ft %d\n", printf("%#8.8x.\n", 1));
	printf("ft %d\n", ft_printf("%#8.8x.\n", 1));

	printf("ft %d\n", printf("%+8.8d.\n", 1));
	printf("ft %d\n", ft_printf("%+8.8d.\n", 1));

	printf("ft %d\n", printf("%#8.8o.\n", 1));
	printf("ft %d\n", ft_printf("%#8.8o.\n", 1));

	printf("\n31. TEST minus flag\n");

	printf("return value re: %d\n", printf("%-5d\n",115));
	printf("return value ft: %d\n", ft_printf("%-5d\n",115));

	printf("return value re: %d\n", printf("%-5u\n",115));
	printf("return value ft: %d\n", ft_printf("%-5u\n",115));

	printf("return value re: %d\n", printf("%-5o\n",115));
	printf("return value ft: %d\n", ft_printf("%-5o\n",115));

	printf("return value re: %d\n", printf("%-5x\n",115));
	printf("return value ft: %d\n", ft_printf("%-5x\n",115));

	printf("return value re: %d\n", printf("%-5%\n"));
	printf("return value ft: %d\n", ft_printf("%-5%\n"));

	printf("return value re: %d\n", printf("%-5c\n", 'c'));
	printf("return value ft: %d\n", ft_printf("%-5c\n", 'c'));

	printf("return value re: %d\n", printf("%-7d\n",-7));
	printf("return value ft: %d\n", ft_printf("%-7d\n",-7));

	printf("return value re: %d\n", printf("%-7d\n",-1560133635));
	printf("return value ft: %d\n", ft_printf("%-7d\n",-1560133635));

	printf("return value re: %d\n", printf("%+-5d\n",0));
	printf("return value ft: %d\n", ft_printf("%+-5d\n",0));

	printf("return value re: %d\n", printf("%+-5d\n",-7));
	printf("return value ft: %d\n", ft_printf("%+-5d\n",-7));

	printf("return value re: %d\n", printf("%-5s\n","ab"));
	printf("return value ft: %d\n", ft_printf("%-5s\n","ab"));

	printf("return value re: %d\n", printf("%-5s\n",""));
	printf("return value ft: %d\n", ft_printf("%-5s\n",""));

	printf("return value re: %d\n", printf("%-5s\n","abcdefg"));
	printf("return value ft: %d\n", ft_printf("%-5s\n","abcdefg"));

	printf("return value re: %d\n", printf("%-13p\n", ptr));
	printf("return value ft: %d\n", ft_printf("%-13p\n", ptr));

	printf("return value re: %d\n", printf("%%-13\n"));
	printf("return value ft: %d\n", ft_printf("%%-13\n"));

	printf("%-05%.\n");
	ft_printf("%-05%.\n");

	printf("%-05%.\n");
	ft_printf("%-05%.\n");

	printf("\nADDITIONAL\n");
	
	printf("re: %+15.15ld\n", 12342342342342344);
	ft_printf("ft: %+15.ld\n", 12342342342342344);

	printf("re: %+20ld\n", 12342342342342344);
	ft_printf("ft: %+20ld\n", 12342342342342344);

	printf("re -l %lo\n", l);
	ft_printf("ft -l %lo\n", l);

	printf("re -h %hu\n", b);
	ft_printf("ft -h %hu\n", b);

	printf("re %d\n", printf("%012d ja %d\n", 13 ,13));
	ft_printf("ft %d\n", ft_printf("%012d ja %d\n", 13 ,13));

	printf("%+015f\n", 117.543);
	ft_printf("%+015f\n", 117.543);

	printf("re: %015.15o\n", 12);
	ft_printf("ft: %015.15o\n", 12);

	printf("re: %015.15x\n", 12);
	ft_printf("ft: %015.15x\n", 12);

	printf("%s\n", NULL);
	ft_printf("%s\n", NULL);

	printf("ft %d\n", printf("%x", 0));
	printf("ft %d\n", ft_printf("%x", 0));

	printf("re %d\n", printf("%15.4d\n", 424242));
	printf("ft %d\n", ft_printf("%15.4d\n", 424242));

	printf("re %d\n", printf("%15.4d\n", -424242));
	printf("ft %d\n", ft_printf("%15.4d\n", -424242));

	printf("re %d\n", printf("{%.*s}", 0, "42"));
	printf("fe %d\n", ft_printf("{%.*s}", 0, "42"));

	printf("re %d\n", printf("{%.*s}", -5, "42"));
	printf("fe %d\n", ft_printf("{%.*s}", -5, "42"));

	printf("re %d\n", printf("%05.2d\n", 4));
	printf("ft %d\n", ft_printf("%05.2d\n", 4));

	printf("re %d\n", printf("%05.2d\n", -4));
	printf("ft %d\n", ft_printf("%05.2d\n", -4));

	ft_printf("%");
	ft_printf("%5");
	ft_printf("%-05");
	ft_printf("%-5");
	ft_printf("%05");

	printf("{%#.5o}\n", 1);
	ft_printf("{%#.5o}\n", 1);

	printf("{%#.5x}\n", 1);
	ft_printf("{%#.5x}\n", 1);

	printf("re %d\n", printf("{%#.5o}\n", 42));
	printf("ft %d\n", ft_printf("{%#.5o}\n", 42));

	printf("re %d\n", printf("%-10.5i.\n", -216));
	printf("ft %d\n", ft_printf("%-10.5i.\n", -216));

	printf("re %d\n", printf("%+-10.5i.\n", -216));
	printf("ft %d\n", ft_printf("%+-10.5i.\n", -216));

	printf("re %d\n", printf("%+-8.3i.\n", -8473));
	printf("ft %d\n", ft_printf("%+-8.3i.\n", -8473));

	printf("{%3o}\n", 0);
	ft_printf("{%3o}\n", 0);

	printf("{%3x}\n", 0);
	ft_printf("{%3x}\n", 0);

	printf("re %d\n", printf("%03.2d\n", -1));
	printf("ft %d\n", ft_printf("%03.2d\n", -1));

	printf("re %d\n", printf("%+03.2i.\n", -1));
	printf("ft %d\n", ft_printf("%+03.2i.\n", -1));

	printf("re %d\n", printf("{%.*s}", 5, "42"));
	printf("ft %d\n", ft_printf("{%.*s}", 5, "42"));

	printf("re %d\n", printf("{%22.08s}", "fdeqescfxawe"));
	printf("ft %d\n", ft_printf("{%22.08s}", "fdeqescfxawe"));

	printf("\n32. TEST floats\n");

	printf("re %d\n", printf("%f\n", -117.543));
	printf("ft %d\n", ft_printf("%f\n", -117.543));

	printf("%f\n", 117.543);
	ft_printf("%f\n", 117.543);

	printf("re %d\n", printf("%+f\n", 117.543));
	printf("ft %d\n", ft_printf("%+f\n", 117.543));

	printf("%15f\n", 117.543);
	ft_printf("%15f\n", 117.543);

	printf("%-15f\n", 117.543);
	ft_printf("%-15f\n", 117.543);

	printf("%015f\n", 117.543);
	ft_printf("%015f\n", 117.543);

	printf("% 13f\n", 117.543);
	ft_printf("% 13f\n", 117.543);

	printf("% 15f\n", 117.543);
	ft_printf("% 15f\n", 117.543);

	printf("%+15f\n", 117.543);
	ft_printf("%+15f\n", 117.543);

	printf("%.5f\n", 117.54312);
	ft_printf("%.5f\n", 117.543123);

	ft_printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);

	printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.6465424242242, 1444565444646.6465424242242l);
	ft_printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.6465424242242, 1444565444646.6465424242242l);

	
	ft_printf("%.2f\n", 4.12345);
	ft_printf("%.8f\n", 4.12345);
	ft_printf("%.1f\n", 4.12345);
	printf("%#.0f\n", 4.12345);
	ft_printf("%#.0f\n", 4.12345);
	printf("%.0f\n", 4.12345);
	ft_printf("%.0f\n", 4.12345);

	printf("re %d\n", printf("%f\n", -4.12345));
	printf("ft %d\n", ft_printf("%f\n", -4.12345));

	printf("re %d\n", printf("%.4f\n", -4.12345));
	printf("ft %d\n", ft_printf("%.4f\n", -4.12345));

	printf("re %d\n", printf("%f\n", 0.0));
	printf("ft %d\n", ft_printf("%f\n", 0.0));

	printf("re %d\n", printf("%f\n", 4.12345));
	printf("ft %d\n", ft_printf("%f\n", 4.12345));

	printf("\nBONUS PART \n\n");

	printf("re asterix: %d\n", printf("%*d\n", 5, 9));
	printf("ft asterix: %d\n", ft_printf("%*d\n", 5, 9));

	printf("re asterix: %d\n", printf("%.*d\n", 5, 9));
	printf("ft asterix: %d\n", ft_printf("%.*d\n", 5, 9));

	ft_printf("Bits: %b\n", 255);

	char *arr[] = {"Seppo", "Suppo", "Teppo", "Kalevi", 0};

	ft_printf("Print 2d array:\n%a", &arr);

	ft_printf("Print str len: %n\n", "123456789");

	ft_printf("Print num len: %N\n", 12345);

	return (0);
}