# Notatki-do-herbatki01

### Przyklad programu w jezyku C

Poniższe linki stanowia przykłady do programów w jezyku C. Mam nadzieję,że kiedyś je zrozumię. lol

_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/programy.cpp)

### Przyklad programu w jezyku C

pozostałe przykłady programów w języku C

_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/programy2.cpp)  
_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/Zadanie%205.cpp)  
_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/zadanie%20z%20heronem.doc)  
Zadanie z Heronem
  
  #include <stdio.h>
#include <math.h>
double pierwiastek (double a)
{
	double x=1, epsilon=1e-9;
	do
	{
		x=0.5*(x+(a/x));
	}
	while(fabs(x-(a/x))>epsilon*x);
	return x;
}
int main(){
	
	double a;
	for (a=3e-5; a<1e7; a*=10){
	printf("Otrzymany wynik funkcji: %lf\n", pierwiastek(a));
	printf("Oczekiwany wynik: %lf\n", sqrt(a));
	printf("Blad względny: %le%%\n\n",(fabs(pierwiastek(a)-sqrt(a))/sqrt(a)*100));
	
}return 0;
}




Szereg mac


#include <stdio.h>
#include <math.h>
double exponent (double x)
{
	double suma=1, epsilon=1e-8;
	double wyraz=1;
	int n=1;
	do
	{
	wyraz=wyraz*x/n;
	n++;
	suma=suma+wyraz;
	}
	while(fabs(wyraz)>epsilon);
	return suma;
}
int main(){
	double a;
	for(a=-20; a<40; a+=2){
		printf("Otrzymany wynik funkcji: %lf\n", exponent(a));
		printf("Oczekiwany wynik: %lf\n", sqrt(a));
		printf("Blad względny: %le %\n %\n", (fabs(exponent(a)-exp(a))/exp(a)*100));	
	
}return 0;
}

  
[Znaczniki MD](https://en.wikipedia.org/wiki/Markdown)
Dla potrzebujących szybko podpowiedzi.  

Przykład jak można wstawic zdjęcie do swojego repozytorium

![asd](http://ocdn.eu/images/pulscms/ZTc7MDA_/69b1ca79f93ec522ce597f82a58b620a.jpg)  

