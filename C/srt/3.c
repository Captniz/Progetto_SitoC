/*56> ordina-stringhe  
- Scrivere un programma che ordini in modo crescente e con un algoritmo in-place un array di
DIM stringhe inserite esternmente, visualizzando il risultato dell'ordinamento sullo schermo. 
Si assuma che ogni stringa abbia una lunghezza L non superiore a 80 caratteri.*/
#include<stdio.h>
#include<string.h>
#define DIM 5
#define L 80
void InputStringhe(char ms[][L]);
void VisualizzaStringhe(char ms[][L]);
void OrdinaStringhe(char ms[][L]);
int main(){
    char ms[DIM][L];
    int i,j;
    InputStringhe(ms);
    OrdinaStringhe(ms);
    VisualizzaStringhe(ms);
    return 0;
}

void InputStringhe(char ms[DIM][L]){
    int i;
    for(i=0;i<DIM;i++){
        printf("Stringa %d:",i+1);
        gets(ms[i]);
        fflush(stdin);
    }
}
void VisualizzaStringhe(char ms[DIM][L]){
    int i;
    printf("\n");
    for(i=0;i<DIM;i++){
       	printf("Stringa %d:%s\n",i+1,ms[i]);
    }
}
void OrdinaStringhe(char ms[DIM][L]){
    char box[L];
    int i,j;
    for(i=0;i<DIM-1;i++){
        for(j=i+1;j<DIM;j++){
            if(strcmp(ms[i],ms[j])>0){
                strcpy(box,ms[i]);
                strcpy(ms[i],ms[j]);
                strcpy(ms[j],box);
            }
        }
    }
}
