/*52> Convertire un array dimensionato DIM=8 da binario a decimale
es int v[]={0,0,0,0,1,1,0,1}; //un byte
00001101[2]=13[10]
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define DIM 8
int main(){
	int v[DIM]={0,0,0,1,1,1,0,1},v2[DIM];
	int i,somma=0;
	srand(time(NULL));
	for(i=0;i<DIM;i++){
		v[i]=rand()%2;
		printf("%3d",v[i]);
	}
	putchar('\n');
	for(i=0;i<DIM;i++){
		if(v[i]==0){
			v2[i]=0;				
		}else{
			v2[i]=pow(2,DIM-i-1);
			somma=somma+v2[i];
		}
	}
	putchar('\n');
	printf("%d",somma);
	return 0;
}
