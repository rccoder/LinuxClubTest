#include <stdio.h>
int main()
{
	FILE *p = fopen("/proc/meminfo", "r");
	putchar(fgetc(p));
	return 0;
}
