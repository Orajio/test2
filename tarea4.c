#include <stdio.h>

#define TAM 5

int main()
{

	char palabra[TAM];
	int i,par,impar,a,b,x,cont;

	cont=0;
	palabra[TAM]={r,a,l,l,a,r};
	//reordenar para intentar generar simetria en el arreglo:
	for (a=1; a<(TAM+1); a++){
        for (b=0;b<(TAM);b++){
               if (palabra[b]>palabra[b+1]){
                    x=palabra[b];
                    palabra[b]=palabra[b+1];
                    palabra[b+1]=x;
                }
        }
    }

	//revisar si es igual al reves y al derecho (caso de arreglos tamaño par e impar):
	if((TAM+1)%2==0){ //método para pares
		par=1;
		for(i=0;i<(TAM/2);i++){
			if(palabra[i]==palabra[TAM-i]){
			cont=cont++;
			}
			if(palabra[i]!=palabra[TAM-i]){
			i=TAM/2;
			}

		}
        else{             //método para impares
            impar=1;
            for(i=0;i<((TAM-1)/2);i++){
                if(palabra[i]==palabra[TAM-i]){
                cont=cont++;
                }
                if(palabra[i]!=palabra[TAM-i]){
                i=(TAM-1)/2;
                }
            }
        }
	}
		if(par==1&&cont==TAM/2)||(impar==1&&cont==(TAM-1)/2){
		printf("1\n");
	    }
		else{
		printf("0\n");
	    }
return 0;
}
