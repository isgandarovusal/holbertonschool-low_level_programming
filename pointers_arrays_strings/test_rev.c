#include "main.h"

int main(void)
{
	char *str1 = "Hello";
	char *str2 = "";
	char *str3 = "A";
	char *str4 = "12345";
	char *str5 = "racecar";
	
	print_rev(str1);
	print_rev(str2);  /* Empty string - should print just new line */
	print_rev(str3);
	print_rev(str4);
	print_rev(str5);
	
	return (0);
}
