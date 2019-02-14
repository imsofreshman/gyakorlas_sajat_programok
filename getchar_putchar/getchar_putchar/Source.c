#include <stdio.h>
/* az inputot az outputra masolja v1.0 */
main()
{
	int c;

	printf("Irjon be egy stringet, amit szeretne lemasolni:\n");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}