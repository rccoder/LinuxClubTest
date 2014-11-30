#include <stdio.h>
char *a = "Hello World!";
int i = 0;
int main()
{
if(i < 20){
putchar(a[i++]);
main();
}
return 0;
}
