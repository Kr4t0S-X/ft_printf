#include <stdio.h>
#include "../includes/ft_printf.h"


int		main(void)
{
	unsigned int X53 = 14301;
	char c52 = 'o';
	float f51 = -104;
	char c50 = 'c';
	unsigned int x43 = 22974;
	int i42 = 225;
	char str41[400] = "Hauntology (a portmanteau of haunting and ontology[1]) is a concept coined by philosopher Jacques Derrida in his 1993 book Spectres of Marx.";
	float f40 = 14644;
	unsigned int X33 = 25047;
	unsigned int o32 = 26025;
	char str31[400] = "		1,2, salmy the salmon";
	char str30[400] = "Hauntology (a portmanteau of haunting and ontology[1]) is a concept coined by philosopher Jacques Derrida in his 1993 book Spectres of Marx.";
	unsigned int u23 = 6074;
	unsigned int o22 = 704;
	int i21 = -12197;
	int i20 = -13378;
	unsigned int x13 = 27078;
	void *ptr12 = NULL;
	unsigned int u11 = 15744;
	unsigned int x10 = 5372;
	unsigned int u03 = 16936;
	int i02 = 8350;
	unsigned int o01 = 11653;
	float f00 = 9601;

ft_printf(""_BBLUE"f"_END" "_MAGENTA"9601"_END" >"_CYAN"012.6L"_END" >"_CYAN""_END"<; = %012.6Lf\n"_BBLUE"o"_END" "_MAGENTA"11653"_END" >"_CYAN"#17.11ll"_END" >"_CYAN""_END"<; = %#17.11llo\n"_BBLUE"i"_END" "_MAGENTA"8350"_END" >"_CYAN"#2.10hh"_END" >"_CYAN""_END"<; = %#2.10hhi\n"_BBLUE"u"_END" "_MAGENTA"16936"_END" >"_CYAN" h"_END"<; = % hu\n", f00,o01,i02,u03);
ft_printf(""_BBLUE"x"_END" "_MAGENTA"5372"_END" >"_CYAN""_END"<; = %x\n"_BBLUE"u"_END" "_MAGENTA"15744"_END" >"_CYAN""_END" >"_CYAN""_END"<; = %u\n"_BBLUE"p"_END" "_MAGENTA"NULL"_END" >"_CYAN""_END"<; = %p\n"_BBLUE"x"_END" "_MAGENTA"27078"_END" >"_CYAN"-3.35h"_END"<; = %-3.35hx\n", x10,u11,ptr12,x13);
ft_printf(""_BBLUE"i"_END" "_MAGENTA"-13378"_END" >"_CYAN"+4.26hh"_END"<; = %+4.26hhi\n"_BBLUE"i"_END" "_MAGENTA"-12197;"_END" = %i\n"_BBLUE"o"_END" "_MAGENTA"704"_END" >"_CYAN""_END" >"_CYAN"#10hh"_END"<; = %#10hho\n"_BBLUE"u"_END" "_MAGENTA"6074"_END" >"_CYAN""_END"<; = %u\n", i20,i21,o22,u23);
ft_printf("s Hauntology (a portmanteau of haunting and ontology[1]) is a concept coined by philosopher Jacques Derrida in his 1993 book Spectres of Marx. = %s\ns  1,2, salmy the salmon = %s\n"_BBLUE"o"_END" "_MAGENTA"26025"_END" >"_CYAN""_END"<; = %o\n"_BBLUE"X"_END" "_MAGENTA"25047"_END" >"_CYAN""_END"<; = %X\n", str30,str31,o32,X33);
ft_printf(""_BBLUE"f"_END" "_MAGENTA"14644"_END" >"_CYAN"#4.9h"_END"<; = %#4.9hf\ns Hauntology (a portmanteau of haunting and ontology[1]) is a concept coined by philosopher Jacques Derrida in his 1993 book Spectres of Marx. = %s\n"_BBLUE"i"_END" "_MAGENTA"225"_END" >"_CYAN"-4.8l"_END"<; = %-4.8li\n"_BBLUE"x"_END" "_MAGENTA"22974;"_END" = %x\n", f40,str41,i42,x43);
ft_printf(""_BBLUE"c"_END" "_MAGENTA"'c'"_END" >"_CYAN""_END"<; = %c\n"_BBLUE"f"_END" "_MAGENTA"-104"_END" >"_CYAN""_END"<; = %f\n"_BBLUE"c"_END" "_MAGENTA"'o'"_END" >"_CYAN""_END"<; = %c\n"_BBLUE"X"_END" "_MAGENTA"14301"_END" >"_CYAN"+5.12h"_END"<; = %+5.12hX\n", c50,f51,c52,X53);
	return (0);
}