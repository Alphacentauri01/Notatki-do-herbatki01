#include <stdio.h>
#include <math.h>

double eksponant  (double x){

double suma=1, epsilon=1e-8;
double wyraz=1;
int n=1;

do {
	wyraz=wyraz*x/n;
	n++;
	suma=suma+wyraz;
}
	while (fabs(wyraz)>epsilon);
	return suma;
}
int main()
{
	double a;
	for (a=-20; a<40; a+=2){
		printf("e%f=%g b³.wzp=%le\n",
		a, eksponant(a),
		fabs((eksponant(a)-exp(a))/exp(a)));
		
		
	}return 0;
}
