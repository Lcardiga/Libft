#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//------------------------------------------------------------------------------

// isdigit
/* not work
int	main()
{
	int	i;

	i = 5;
	printf("%d", isdigit(i));
	return (0);
}
*/
//------------------------------------------------------------------------------
//strlen
/*
int	main(void)
{
	char	*c;

	c = "test1gew3qgr";
	printf ("Standart strlen: %d\n", strlen(c));
	printf ("New strlen: %d", ft_strlen(c));
	return (0);
}
*/
//------------------------------------------------------------------------------
// memset
/*
int	main()
{
	char	a[] = "tegegee";

	printf ("Результат:%s\n", memset(a, '*', 3));
	printf ("Результат:%s\n", ft_memset(a, '-', 3));
}
*/

//------------------------------------------------------------------------------

// bzero
/*
int	main()
{
	char	a[] = "f3f3gf3";

	printf("BZERO:%s\n", " ");
	printf("Результат 1 (стандартная библиотека): %s\n", bzero(a, 4));
	printf("Результат 2  (cобственая библиотека): %s\n", ft_bzero(a, 2));
}
*/
//------------------------------------------------------------------------------

//memmove memcpy
/*
int	main()
{
	char	str1[] = "Test_move";
	char	str2[] = "Test_move";
	char	str3[] = "Test_cpy1";
	char	str4[] = "Test_cpy1";

	printf("%s\n", str1);
	printf("%s\n", memmove(str1, str1 + 4, 6));
	printf("%s\n", ft_memmove(str2, str2 + 4, 6));

	printf("%s\n", " ");
	printf("%s\n", memcpy(str3, str3 + 4, 6));
	printf("%s\n", ft_memcpy(str4, str4 + 4, 6));
}
*/
//------------------------------------------------------------------------------

// strlcpy
/*
int	main()
{
	char	dest1[] = "Test_strlcpy1";
	char	src1[] = "new1";
	char	dest2[] = "Test_strlcpy2";
	char	src2[] = "new2";

	strlcpy (dest1, src1, 8);
	printf("%s\n", dest1);
	ft_strlcpy (dest2, src2, 8);
	printf("%s", dest2);
	return (0);
}
*/
//------------------------------------------------------------------------------

// strlcat
/*
int	main(void)
{
	char	*a;
	char	*b;
	int		size;

	a = "Test1";
	b = "jjl";
	size = 3;
	if (size > strlen(a))
	{
		printf ("%s\n", "SIZE > dest");
	}
	printf("%d\n", strlcat(a, b, size));
	printf("%d\n", ft_strlcat(a, b, size));
	return (0);
}
*/
//------------------------------------------------------------------------------

// strlcat
/*
int	main()
{
	char	dest1[] = "Test1";
	char	src1[] = "new1";
	char	dest2[] = "Test2";
	char	src2[] = "new2";

	strlcat (dest1, src1, 5);
	printf("%s\n", dest1);
//	ft_strlcat (dest2, src2, 15);
//	printf("%s", dest2);
	return (0);
}
 */
//------------------------------------------------------------------------------
//strchr
/*
int	main()
{
	const char	c[] = "TEST_sh468!";
	const char	b = 's';
	char		*chr;
	char		*chr2;

	chr = strchr(c, b);
	chr2 = ft_strchr(c, b);
	if (chr == NULL)
		printf ("STANDART:Symbol not found\n");
	else
		printf ("STANDART: Symbol in the string on position: %s\n", chr);
	if (chr2 == NULL)
		printf ("OWN: Symbol not found\n");
	else
		printf ("OWN: Symbol in the string on position: %s\n", chr2);
	return (0);
}
*/

//------------------------------------------------------------------------------
//strrchr
/*
int	main()
{
	const char	c[] = "TEST_sEh468g3g3sE7ol!";
	const char	b = '7';
	char		*chr;
	char		*chr2;

	chr = strrchr(c, b);
	chr2 = ft_strrchr(c, b);
	if (chr == NULL)
		printf ("STANDART:Symbol not found\n");
	else
		printf ("STANDART: Symbol in the string on position: %s\n", chr);
	if (chr2 == NULL)
		printf ("OWN: Symbol not found\n");
	else
		printf ("OWN: Symbol in the string on position: %s\n", chr2);
	return (0);
}
*/
//------------------------------------------------------------------------------
//strncmp
/*
int	main()
{
	char	str1[] = "omg1||||||||||||||||";
	char	str2[] = "omg3";
	size_t	n;

	n = 4;
	printf ("%d\n", strncmp(str1, str2, n));
	printf ("%d\n", ft_strncmp(str1, str2, n));
}
 */
//------------------------------------------------------------------------------
//memchr
/*
int	main()
{
	char	str[] = "ABCDefTY";
	char	c;

	c = 'e';
	printf ("%s\n", memchr(str, c, -6));
	printf ("%s\n", ft_memchr(str, c, 8));
	return (0);
}
*/
//------------------------------------------------------------------------------
//memcmp
/*
int	main()
{
	char	str1[] = "ABC2";
	char	str2[] = "ABC1";
	size_t	n;

	n = 7;
	printf ("STANDART MEMCMP: %d\n", memcmp(str1, str2, n));
	printf ("OWN MEMSMP:      %d\n", ft_memcmp(str1, str2, n));
}
*/
//------------------------------------------------------------------------------
//strnstr
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "hello, world!";
	str2 = "llo w";
	printf ("%s\n", strnstr(str1, str2, 50));
	printf ("%s\n", ft_strnstr(str1, str2, 50));
}
*/

//------------------------------------------------------------------------------
//ft_atoi
/*
int	main(void)
{
	char	str1;
	int		val;

	printf ("%d\n", ft_atoi("-21474836490000000000"));
	printf ("%d", atoi("-21474836490000000000"));
	return (0);
}
*/

//------------------------------------------------------------------------------
//calloc
/*
int	main()
{
	int	*i;

	i = (int *)ft_calloc(4, 5);
	if (i != NULL)
	{
		printf (" Memory is created successfully \n");
	}
	else
		printf (" Memory is not created ");
	return (0);
}
*/
//------------------------------------------------------------------------------
//strdup
/*
int	main()
{
	char	*str;
	char	*result;

	str = "testdup     io0-";
	printf ("|%s|\n|%s|\n", strdup(str), ft_strdup(str));
	return (0);
}
*/
//------------------------------------------------------------------------------
//substr
/*
int	main()
{
	char	*str;

	str = ft_substr("test_SUBstr", 2, -3);
	printf("%s", str);
	return (0);
}
*/
//------------------------------------------------------------------------------
//strjoin
/*
int	main()
{
	char	s1[9] = "text ONE";
	char	s2[9] = "text TWO";
	char	*result = ft_strjoin(s1, s2);

	printf ("RESULT:%s\n", result);
	return (0);
}
*/
//------------------------------------------------------------------------------
//strtrim
/*
int	main()
{
	char	*a = "123Hello321111";
	char	*b = "123";

	printf("%s\n",ft_strtrim(a, b));
	return (0);
}
*/
//------------------------------------------------------------------------------
//split
/*
int	main(void)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split("Hello, my dear friends", ' ');
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
*/
//------------------------------------------------------------------------------
//itoa
/*
int	main()
{
	printf ("%s\n", ft_itoa(0));
	printf ("%s\n", ft_itoa(-10));
	printf ("%s\n", ft_itoa(10));
	printf ("%s\n", ft_itoa(8124));
	printf ("%s\n", ft_itoa(-9874));
	printf ("%s\n", ft_itoa(543000));
	printf ("%s\n", ft_itoa(-2147483648));
	printf ("%s\n", ft_itoa(2147483647));
	return (0);
}
*/
//------------------------------------------------------------------------------
//strmapi
/*
void	f(unsigned int a, char b)
{
	printf ("STRMAPI: index = %d and %c\n", a, b);
}

int	main()
{
	char	str[10] = "TEST.";
	char	*result = ft_strmapi(str, f);

	printf ("RESULT: %s\n", str);
	printf ("RESULT: %s\n", result);
	return (0);
}
*/
//------------------------------------------------------------------------------
//striteri
/*
void	f(unsigned int a, char *b)
{
	printf ("funct in funct: %d%s\n", a, b);
}

int	main()
{
	char	str[10] = "TEST.";
	printf ("RESULT: %s\n", str);
	ft_striteri(str, f);
	printf ("RESULT: %s\n", str);
	return (0);
}
*/
//------------------------------------------------------------------------------
//putendl_fd
/*
int	main()
{
	char	str[20] = "TEST";
	ft_putendl_fd(str, 1);
	return (0);
}
*/
//------------------------------------------------------------------------------
//putnbr
/*
int	main()
{
	int	num;

	num = -2147483648;
	ft_putnbr_fd(num, 1);
	return (0);
}
*/
//------------------------------------------------------------------------------
//lstnew
/*
int	main()
{
	t_list	*b;
	int		a[] = {1, 2, 3};

	b = ft_lstnew(&a);
	printf ("1 %d\n", ((int *)b->content)[1]);
	printf ("2 %p\n", &(b -> content));
}
*/