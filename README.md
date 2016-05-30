# Notatki-do-herbatki01

### Przyklad programu w jezyku C

Poniższe linki stanowia przykłady do programów w jezyku C. Mam nadzieję,że kiedyś je zrozumię. lol

_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/programy.cpp)  

##Porawione zadanie 4  

	include <stdio.h>
	#include <math.h>
	
	double Heron (double a);
	                        {
	doble x=1, eps=1e-15;
		do
		{
			x=0.5*(x+(a/x));
		}
		while (fabs (x-a/x)>eps*x);
		return x;
	}
	int main(){
		duble a;
		duble x=1;
		doble z;
		pritf("Podaj liczbę: ");
		scanf("%1f", &a);
			for (z=1e-5; z<=1e15; z=z*10)
			{
				printf ("\nHeron(%1f)=%.15lf\n", z, Heron(a));
				printf ("\nsqrt(%1f)=%.15lf\t", z, sqrt(a));
				printf ("\n\nblad wzgledny=%.15le", (Heron(a)
				-sqrt(a)) / sqrt(a));
				getchar ();
				getchar ();
				return 0;
			}
	}
	
### Przyklad programu w jezyku C  
	
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

pozostałe przykłady programów w języku C

_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/programy2.cpp)  
_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/Zadanie%205.cpp)  
_Kliknij link z kodem zrodlowym_ [Link](https://github.com/Alphacentauri01/Notatki-do-herbatki01/blob/master/zadanie%20z%20heronem.doc)


###Zadanie z Heronem
  
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




###Szereg mac


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

#Przykład jak można wstawic zdjęcie do swojego repozytorium

	![asd](http://ocdn.eu/images/pulscms/ZTc7MDA_/69b1ca79f93ec522ce597f82a58b620a.jpg)  
![asd](http://ocdn.eu/images/pulscms/ZTc7MDA_/69b1ca79f93ec522ce597f82a58b620a.jpg)

Jeżeli chcesz wstawiać linijki kodu do notatek jako bloki, używaj 4-ech spacji albo tab na poczatku każdej linii.

###Akapity, nagłówki, cytaty  
Akapit to po prostu jedna lub więcej kolejnych linii tekstu, rozdzielonych jedną lub więcej pustych linii. (Pusta linia to dowolna linia, która wygląda jak pusta linia – linia nie zawierająca nic poza spacjami lub tabulatorami jest traktowana jak pusta.) Zwykłe akapity nie powinny być wcinane spacjami lub tabulatorami.  
Markdown oferuje dwa rodzaje nagłówków: Setext[1] i atx[2].   
Nagłówki w stylu Setext dla h1 i h2 są tworzone przez „podkreślanie” znakami równości (=) lub dywizami (-).   
Aby stworzyć nagłówek w stylu atx, należy wstawić od 1 do 6 znaków kratki (#) na początku linii – liczba kratek równa się wynikowemu poziomowi nagłówka HTML.

 Bloki cytatów są oznaczane przez użycie zapożyczonych z e-maili znaków „>”.

	Markdown:	                Wynik:
	Nagłówek pierwszego poziomu  | <h1>Nagłówek pierwszego poziomu</h1>	
	===========================    ====================================
	
	Nagłówek drugiego poziomu    |	<h2>Nagłówek drugiego poziomu</h2>
	--------------------------   |  ------------------------------------
	
	Now is the time for all good men to come to
	the aid of their country. This is just a
	regular paragraph.
	
	Pójdźże, kiń tę chmurność w głąb flaszy!
	
	# Nagłówek 3.
	
	> To jest blok cytatu.
	>
	> To jest drugi akapit w bloku cytatu.
	>
	> # To jest H2 w bloku cytatu
	
	<p>Now is the time for all good men to come to
	the aid of their country. This is just a
	regular paragraph.</p>
	
	<p>Pójdźże, kiń tę chmurność w głąb flaszy!</p>
	
	<h3>Nagłówek 3.</h3>
	
	<blockquote>
	    <p>To jest blok cytatu.</p>
	
	    <p>To jest drugi akapit w bloku cytatu.</p>
	
	    <h2>To jest H2 w bloku cytatu</h2>
	</blockquote>
	

	

