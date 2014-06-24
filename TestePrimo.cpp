int main (){
	
	int num, a, num2, b;
	bool i = 0, primo;

	printf("Insira o numero a ser verificado");
	scanf("%d",&num);

	num2 = num - 1;
	inicio:
		a = 2 + (rand%num2);
		b = pow(a,num2)%num;
		if (b==1){
			printf("Testando seu numero para a base %d",a);
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
			goto inicio;
		}

	

}