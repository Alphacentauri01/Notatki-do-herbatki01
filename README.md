# Notatki-do-herbatki01#include<stdio.h>
#define znak "*"        / *znak wypełniania*/
main(){
	int lbwier;     / *calkowita liczba wierszy*/
	int lw;         / *licznik wierszy*/
	int lods;       / *liczba odstepów poprzedzajacych gwiazdkę*/
	int j;
	printf("ile wierszy?");
	scanf("%d", &lbwier);
	for (lw=0; lw<lbwier ; lw++){
		lods=lbwier-lw-1;
		for(j=0;j<1lods;j++) putchar('');
		for(j=0 ; j<2*lw+1; j++) putchar (znak);
		putchar ("\n")
	}
}

#include <stdio.h>
int main(){
	int a,b; double c=5;
printf("Podaj dwie liczby: a i nacisnij enter i b i nacisnij 
enter:");
	scanf("%d %d", &a,&b);
printf("a=%b b=%d\n",a,b);
printf ("suma=%d\n",a*b);
printf("suma=%d\n",a-b);
printf("%d / lf = %lf\n",a,c,a/c);
return 0; 
}
