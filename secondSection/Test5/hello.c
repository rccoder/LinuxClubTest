#include <stdio.h>
char a[] = "Hello World\n";
int i = 0;
int main()
{
if(i < 1)
{
putchar(a[i++]);
main();
}
return 0;
}
