//40> emulare la funzione strncmp char by char
#include<stdio.h>
#include<string.h>
#define DIM 80
void my_strncmp(char [], char [], int);
int main()
{
	char s1[DIM],s2[DIM];
	int n,max;
	printf("inserire 1 stringa: ");
	gets(s1);
	fflush(stdin);
	printf("inserire 2 stringa: ");
	gets(s2);
	fflush(stdin);
	if(strlen(s1)>strlen(s2)){
		max=strlen(s1);
	}else{
		max=strlen(s2);
	}
	do
	{
		printf("inseire un numero: ");
		scanf("%d",&n);
	}while(n<=0 || n>max);
	my_strncmp(s1,s2,n);
	return 0;
}
void my_strncmp(char s1[], char s2[], int n){
	int i,flag;
	flag=0;
	while(flag==0 && i<n){
		if(s1[i]==s2[i]){
			flag=0;
			i++;
		}else if(s1[i]>s2[i]){
			flag=1;
		}else{
			flag=-1;
		}
	}
	if(flag==0){
		printf("%s = %s",s1,s2);
	}else if(flag==1){
		printf("%s > %s",s1,s2);
	}else{
		printf("%s < %s",s1,s2);
	}
}
