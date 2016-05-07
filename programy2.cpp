#include <stdio.h>
int main()
{
	int a,b; double c=5;
	printf("Podaj dwie liczby: a i nacisnij enter i b i nacisnij enter:");
	scanf("%d %d", &a,&b);
	printf("a=%b b=%d\n",a,b);
	printf ("suma=%d\n",a*b);
	printf("suma=%d\n",a-b);
	printf("%d / lf = %lf\n",a,c,a/c);
	return 0;
}