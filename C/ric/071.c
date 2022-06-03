/*71> Ricerca dicotomica ricorsiva in un array ordinato
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DIM 10
void carica(int []);
void sort(int []);
void visualizza(int []);
int ricerca(int [], int , int , int  );
int main()
{
	srand(time(NULL));
	int v[DIM];
	int n,c;
	carica(v);
	visualizza(v);
	sort(v);
	visualizza(v);
	printf("\ninserire numero da ricercare: ");
	scanf("%d",&n);
	fflush(stdin);
	c=ricerca(v,n,0,DIM-1);
	if(c==0){
		printf("numero non trovato");
	}else{
		printf("numero %d trovato nella posizione %d",v[c-1],c-1);
	}
	return 0;
}
void carica(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		v[i]=rand()%60+1;
	}
}
void visualizza(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	putchar('\n');
}
void sort(int v[DIM]){
	int i,j,box;
	for(i=0;i<DIM-1;i++){
		for(j=i+1;j<DIM;j++){
			if(v[i]>v[j]){
				box=v[i];
				v[i]=v[j];
				v[j]=box;
			}
		}
	}
}
int ricerca(int v[DIM], int n, int sx, int dx){
	int i;
	i=(sx+dx)/2;
	if(sx>dx){
		return 0;
	}
	if(v[i]==n){
		return i+1;
	}else{
		if(n>v[i]){
			return ricerca(v,n,sx+1,dx);
		}else{
			return ricerca(v,n,sx,dx-1);
		}
	}
	
}
