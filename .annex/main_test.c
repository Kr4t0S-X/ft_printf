#include <stdio.h>
#include "../includes/ft_printf.h"


int		main(void)
{
	int d21 = -302;
	int d20 = -5348;
	int d11 = 8668;
	int d10 = -13695;
	int d00 = 12644;

printf(""_BBLUE"d"_END" "_MAGENTA"12644"_END" >"_CYAN"08l"_END" >"_CYAN""_END"<; = %08ld\n", d00);
printf(""_BBLUE"d"_END" "_MAGENTA"-13695"_END" >"_CYAN"+3h"_END"<; = %+3hd\n"_BBLUE"d"_END" "_MAGENTA"8668"_END" >"_CYAN"#.41h"_END"<; = %#.41hd\n", d10,d11);
printf(""_BBLUE"d"_END" "_MAGENTA"-5348"_END" >"_CYAN"-6.50hh"_END"<; = %-6.50hhd\n"_BBLUE"d"_END" "_MAGENTA"-302"_END" >"_CYAN" 12l"_END"<; = % 12ld\n", d20,d21);
	return (0);
}
