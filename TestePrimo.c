#include "stdio.h"
#include "stdlib.h"
#include "math.h"

unsigned long int mod (unsigned long int a, unsigned long int b)
{
   unsigned long int ret = a % b;
   if(ret < 0)
     ret+=b;
   return ret;
}

unsigned long int calcula (unsigned long int a,unsigned long int num,unsigned long int num2){
	int i,j,primo = 1;
	unsigned long int q[sqrt(num)+1],num3,num4;

	q[0] = 2;
	for (i = 0; i < sqrt(num); ++i)
	{
		q[i++] = q[i];
		loop:
			q[i++]++;
			for (j = 0; j < (i+1); ++j)
			{
				
			}
		

	}
	
}

int main (){
	unsigned long int num, a, num2, b, c;
	int i = 0, primo;

	printf("Insira o numero a ser verificado");
	scanf("%d",&num);

	num2 = num - 1;
	inicio:
		a = 2 + mod(rand(),num2);
		b = pow(a,num2);
		printf("%d\n",b );
		c = mod(b,num);
		printf("%d\n",c );
		if (c==1){
			printf("Testando seu numero para a base %d\n",a);
			primo = calcula(a,num2,num);
			if (primo==1){
				printf("Seu numero eh primo\n");
			}
			else {
				printf("Seu numero nao eh primo\n");
			}
			printf("Deseja testar com outra base?\n0-Nao\n1-Sim\n");
			scanf("%i",&i);
			if (i==1){
				goto inicio;
			}
			else return 0;
		}
		else {
			printf("Seu numero nao eh primo\npois %d elevado a %d nao eh congruente a 1 modulo %d\n",a,num2,num);;
		}
	return 0;	

}