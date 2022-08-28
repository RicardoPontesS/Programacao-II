#include <stdio.h>
#include <stdlib.h>

void atribuiValores(int *vet){
	int cont;
	
	for(cont = 0; cont < 10; cont++){
		
		printf("Digite um valor :");
		scanf("%d",&vet[cont]);
	}
}

void quickSort(int *vet, int esquerda, int direita) {
    int i, j, x, y;
     
    i = esquerda;	
    j = direita;	
    x = vet[(esquerda + direita) / 2];	
     
	
    while(i <= j) { 
        while(vet[i] < x && i < direita) { 
            i++;
        }						
		
					
        while(vet[j] > x && j > esquerda) { 
											
            j--;						
        }
        if(i <= j) { 
            y = vet[i]; 
            vet[i] = vet[j]; 
            vet[j] = y; 
            i++; 
            j--;
        }
    }
     
   
    if(j > esquerda) { 
        quickSort(vet, esquerda, j);  
    }
    if(i < direita) { 
        quickSort(vet, i, direita);
    }
}

void mostrarVetor(int *vet,int n){
	int cont;
	
	for(cont = 0; cont < n; cont++){
		printf("[%d]",vet[cont]);
	}
}

int main() {
	
	int vet[10];
	int max = 10;
	
	atribuiValores(vet);
	quickSort(vet,0,max-1);
	mostrarVetor(vet,max);
	
	return 0;
}
