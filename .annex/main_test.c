#include <stdio.h>
#include "../includes/ft_printf.h"


int		main(void)
{
	char str11[400] = "how do you feel about this";
	char str10[400] = "how do you feel about this";
	char str00[400] = "		1,2, salmy the salmon";

ft_printf("s  1,2, salmy the salmon = %s\n", str00);
ft_printf("s how do you feel about this = %s\ns how do you feel about this = %s\n", str10,str11);
	return (0);
}
