#include <stdio.h>

int main(){
	int vezes,numtabela[202][202],cont=0,numentradas,parametro,entradas,hash,cont2=1;
	int cont3;
	scanf("%d",&vezes);

		while(vezes != 0){
			cont3 = 0;
		int numtabela[202][202] = {};
		scanf("%d %d",&parametro,&numentradas);
			if(vezes!=1){printf("\n");}

			for (int j = 0; j < numentradas; j++){
				scanf("%d",&entradas);
				if(numtabela[hash][entradas]!= 0){
					numtabela[hash][cont3+cont2] = entradas;
					cont2++;
					cont3++;
				}else{
				hash = (entradas%parametro);
				numtabela[hash][cont3] = entradas;
				cont3++;
				}
			}
			
			for(int k = 0; k < parametro;k++){
				printf("%d -> ",k);
				for(int y = 0;y < 202;y++)
					if(numtabela[k][y] != 0){
				printf("%d -> ", numtabela[k][y]);
				}
			 	printf("\\");
			 	if(parametro-1 == k){
			 		if(vezes > 1){printf("\n");}
			 	}else{
			 		printf("\n");
			 	}

			}
		vezes--;
		}

	return 0;
}

/* input para teste:
	3
	1 5
	1 2 3 4 5
	2 5
	200 10 9 5 1
	10 10
	5 5 5 5 5 5 5 5 5 5

	saida:
	0 -> 1 -> 2 -> 3 -> 4 -> 5 -> \

	0 -> 200 -> 10 -> \
	1 -> 9 -> 5 -> 1 -> \

	0 -> \
	1 -> \
	2 -> \
	3 -> \
	4 -> \
	5 -> 5 -> 5 -> 5 -> 5 -> 5 -> 5 -> 5 -> 5 -> 5 -> 5 -> \
	6 -> \
	7 -> \
	8 -> \
	9 -> \

	input para teste:
	2
	13 9
	44 45 49 70 27 73 92 97 95
	7 8
	35 12 2 17 19 51 88 86
	
	saida:
	0 -> \
	1 -> 27 -> 92 -> \
	2 -> \
	3 -> \
	4 -> 95 -> \
	5 -> 44 -> 70 -> \
	6 -> 45 -> 97 -> \
	7 -> \
	8 -> 73 -> \
	9 -> \
	10 -> 49 -> \
	11 -> \
	12 -> \

	0 -> 35 -> \
	1 -> \
	2 -> 2 -> 51 -> 86 -> \
	3 -> 17 -> \
	4 -> 88 -> \
	5 -> 12 -> 19 -> \
	6 -> \

*/ 