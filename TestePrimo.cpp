
int calcula (int a,int num,int num2){
	bool primo;
	int q[];

	q[0] = 2;
	for (int i = 0; i < num/2 ; ++i){
		q[i+1] = q[i] + 1;
		for (int j = 0; j < (i+1); ++j){
			if (q[i+1]%q[j]==0){
				q[i+1]++;
			}
		}
	}

}
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
			printf("Seu numero nao eh primo\npois %d elevado a %d nao eh congruente a 1 modulo %d",a,num2,num);;
		}

	gets();
	return 0;	

}