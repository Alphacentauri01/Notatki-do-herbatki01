#include<stdio.h>
#define znak "*"        / *znak wypelniania*/

main(){
	int lbwier;     / *calkowita liczba wierszy*/
	int lw;         / *licznik wierszy*/
	int lods;       / *liczba odstepów poprzedzajacych gwiazdke*/
	int j;
	printf("ile wierszy?");
	scanf("%d", &lbwier);
	for (lw=0; lw<lbwier ; lw++){
		lods=lbwier-lw-1;
		for(j=0;j<lods;j++) putchar('');
		for(j=0 ; j<2*lw+1; j++) putchar (znak);
		putchar ("\n")
	}
}
