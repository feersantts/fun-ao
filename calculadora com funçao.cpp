#include <stdio.h>
 float result ;
 void adicao() ;
 void subtracao();
 void multiplicacao();
 void divisao();
 
  int main(){
  	char opcao;
  	    printf("Escolha a opera��o (+, -, *, /) \n");
  	    printf("0 - Adicao \n");
  	    printf("1 - Subtracao \n");
  	    printf("2 - Multiplica��o \n");
  	    printf("3 - Divis�o \n");
  	    printf("Escolha a op��o: \n");
  		scanf("%d", &opcao);
  		switch (opcao)
  		{
  			case 0: {
  				     adicao();
  			        }
				break;
		  	case 1:{
		  			 subtracao();
		  		   }	
				break;
			case 2:{
					 multiplicacao();
				   }
				break;
			case 3: {
					  divisao();
					}
				break;
  	
}
  	return 0;
  }
  	void adicao()
	  {			
  					float n1, n2;
  					printf("Digite um valor. \n");
  					scanf("%f", &n1);
  					printf("Digite outro. \n");
  					scanf("%f", &n2);
  						result = n1 + n2;
  					printf("O resultado �: %f\n", result);
  		}
  			void subtracao()
	  {			
  					float n1, n2;
  					printf("Digite um valor. \n");
  					scanf("%f", &n1);
  					printf("Digite outro. \n");
  					scanf("%f", &n2);
  						result = n1 - n2;
  					printf("O resultado �: %f\n", result);
  		}
  			void multiplicacao()
	  {			
  					float n1, n2;
  					printf("Digite um valor. \n");
  					scanf("%f", &n1);
  					printf("Digite outro. \n");
  					scanf("%f", &n2);
  						result = n1 * n2;
  					printf("O resultado �: %f\n", result);
  		}
  			void divisao()
	  {			
  					float n1, n2;
  					printf("Digite um valor. \n");
  					scanf("%f", &n1);
  					printf("Digite outro. \n");
  					scanf("%f", &n2);
  						result = n1 / n2;
  					printf("O resultado �: %f\n", result);
  		}
