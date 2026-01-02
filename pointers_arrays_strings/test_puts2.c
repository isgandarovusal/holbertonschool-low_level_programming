#include "main.h"

int main(void)
{
	char *str1 = "Hello World!";
	char *str2 = "";
	char *str3 = "A";
	char *str4 = "AB";
	char *str5 = "ABCD";
	char *str6 = "123456789";
	
	puts2(str1);
	puts2(str2);  /* Empty string - should print just new line */
	puts2(str3);
	puts2(str4);
	puts2(str5);
	puts2(str6);
	
	return (0);
}
