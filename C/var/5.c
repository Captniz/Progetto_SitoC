/*5> Dato un numero, contare quanti suoi divisori sono potenze di 2.
Esempio: 16
2 4 8 16 		4
Esempio: 25
(nessuno) 		0*/

#include<stdio.h>

int main(){
	int Numero,div,i;
	div=0;
	
	printf("dimmi un nuemro: ");
	scanf("%d",&Numero);
	fflush(stdin);
	
	for(i=2;i<=Numero;i=i*2){
		if(Numero%i==0){
			div++;
			printf("%d",i);
		}
	}
	printf("\ni divisori potenza di 2 sono: %d",div);
	return 0;
}
