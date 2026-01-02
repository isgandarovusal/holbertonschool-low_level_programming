#include "main.h"

int main(void)
{
	char *str1 = "0123456789";      /* Length 10 (even) */
	char *str2 = "012345678";       /* Length 9 (odd) */
	char *str3 = "Hello";           /* Length 5 (odd) */
	char *str4 = "Hi";              /* Length 2 (even) */
	char *str5 = "A";               /* Length 1 (odd) */
	char *str6 = "";                /* Length 0 (even) */
	char *str7 = "Hello World!";    /* Length 12 (even) */
	
	puts_half(str1);  /* Should print: 56789 */
	puts_half(str2);  /* Should print: 45678 (9+1)/2=5, start at index 5 */
	puts_half(str3);  /* Should print: lo (5+1)/2=3, start at index 3 */
	puts_half(str4);  /* Should print: i (2/2=1, start at index 1) */
	puts_half(str5);  /* Should print: A (1+1)/2=1, start at index 1? Wait, actually it's 0? Let's think... */
	puts_half(str6);  /* Should print just new line */
	puts_half(str7);  /* Should print: World! */
	
	return (0);
}
