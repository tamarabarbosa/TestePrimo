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

int calcula (unsigned long int a,unsigned long int num,unsigned long int num2){
	int i,j,primo = 0;
	unsigned long int q[300],num3,num4,aux;

	q[0] = 2;
	for (i = 0; i < (num/2); ++i){
		q[i+1] = q[i];
		loop:
			q[i+1]++;
			for (j = 0; j < (i+1); ++j){
				aux = mod(q[i+1],q[j]);
				if (aux==0){
					goto loop;
				}
			}
	}
	for (i = 0; i < (num/2); ++i){
		num3 = pow(a,(num2/q[i]));
		num4 = mod(num3,num);
		if (num4!=1){
			primo = 1;
		}
	}
	return primo;
}

int main (){
	unsigned long int num, a, num2, b, c;
	int i = 0, primo;

	printf("Insira o numero a ser verificado");
	scanf("%d",&num);

	num2 = num - 1;
	inicio:
		a = 2;
		b = pow(a,num2);
		c = mod(b,num);
		if (c==1){
			printf("Testando seu numero para a base %d\n",a);
			primo = calcula(a,num,num2);
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
			printf("Seu numero nao eh primo\npois %d elevado a %d nao eh congruente a 1 modulo %d\n",a,num2,num);
		}
	return 0;	

}