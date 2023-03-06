/*-------------------------------------------------------------------------------------------------------------------------------------------
Programa serve para resolver as formulas matematicas e calcular os valores de vetor
Composto pelo:

1. menu principal: arrays, formulas matematicas, opcao exit; 
2. submenus de arrays que permitem ao utilizador para ordenar o vetor de forma crescente e decrescente e calcular a soma de todos os valores;
3. submenus de formulas matematicas, ou seja, areas, volumes, formula resolvente;
4. submenus de areas que permitem ao utilizador para calcular a area de circulo, triangulo e retangulo;
5. submenus de volumes que permitem ao utilizador para calcular a area de piramide, cubo e esfera;
6. submenu de formula resolvente que ajuda ao utilizador para resolver a formula indicada.

23-01-2023, Anastasiya Sousa
----------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h> // biblioteca padrao I/O
#include<conio.h> // biblioteca para a utilizacao de comandos I/O extras
#include<stdlib.h> //biblioteca padrao, permite a utilizacao de comandos do sistema
#include <math.h>

#define PI 3.14159

double area_rectangle(double base, double height) {
    return base * height;
}

main(){
	char op, arrays, form, areas, vol, pir;
	int a, b, c, v=10, i, j, aux, vetor[1024], v1[3];
	float delta, y, y1, y2, y3, y4, y5;
	double radius;
	
	
	do{
		system ("cls");
		printf("\n\t*******************************************************************************************");
		printf("\n\t***O programa serve para resolver as formulas matematicas e calcular os valores de vetor***");
		printf("\n\t*******************************************************************************************");
		printf("\n\t----------------------------\n");
		printf("\t- 1 - Arrays ---------------\n");
		printf("\t- 2 - Formulas Matematicas -\n");
		printf("\t- 0 - Sair                 -\n");
		printf("\t----------------------------\n");
		printf("\t=>");
		scanf(" %c", &op);
		
		switch(op){
			case '1':{
				do{
					
					system("cls");
					printf("\n\n-------Arrays-----");
					printf("\n\n-------1 - Ordenacao do vetor de forma crescente-----");
					printf("\n\n-------2 - Ordenacao do vetor de forma decrescente---");
					printf("\n\n-------3 - Soma de todos os valores------------------");
					printf("\n\n-------0 - Voltar--------");
					printf("=>");
					scanf(" %c", &arrays);
					
					
					switch(arrays){
						case '1':{
							system("cls");
							printf("\n****Este programa vai ordenar o vetor de forma crescente**** ");
							/*printf("\n\nDefina numero de posicoes do vetor: ");
							scanf("%d", &v);*/ //serve para definir a dimensao de vetor
							
							//Insira os elementos de vetor separadamente
							
							for(i=0;i<v;i++) {
						    	printf("\n\nIntroduza elemento do vetor: ");
						    	scanf("%d", &vetor[i]);
							}
							
							//Mostra os elementos de vetor introduzidos antes
							
							for(i=0; i<v;i++) {
								printf(" %d", vetor[i]);	
							}
							
							//Troca os elementos de vetor que sejam introduzidos em ordem decrescente para ordem crescente
							
							for (i=0; i<v; i++) {
								for (j=i+1; j<v; j++){
									if (vetor[i]>vetor[j]){
										printf("\nElemento %d-%d", vetor[i], vetor[j]);
										aux=vetor[i];
										vetor[i]=vetor[j];
										vetor[j]=aux;
									}
								}
							}
							
							printf("\nOs elementos do vetor em ordem crescente sao: ");
							for (i=0; i<v; i++){
							printf(" %d", vetor[i]);
							}
							printf("\n\n");
							system("pause");
							break;
						} //case 1 submenu do Arrays
						
						case '2':{
							system("cls");
							printf("\n****Este programa vai ordenar o vetor de forma decrescente**** ");
							/*printf("\n\nDefina numero de posicoes do vetor: ");
							scanf("%d", &v);*/ //serve para definir a dimensao de vetor
							
							//Insira os elementos de vetor separadamente
							
							for(i=0;i<v;i++) {
						    	printf("\n\nIntroduza elemento do vetor: ");
						    	scanf("%d", &vetor[i]);
							}
							
							//Mostra os elementos de vetor introduzidos antes
							
							for(i=0; i<v;i++) {
								printf(" %d", vetor[i]);	
							}
							
							//Troca os elementos de vetor que sejam introduzidos em ordem crescente para ordem decrescente
							
							for (i=0; i<v; i++) {
								for (j=i+1; j<v; j++){
									if (vetor[i]<vetor[j]){
										printf("\nElemento %d-%d", vetor[i], vetor[j]);
										aux=vetor[i];
										vetor[i]=vetor[j];
										vetor[j]=aux;
									}
								}
							}
							
							printf("\nOs elementos do vetor em ordem decrescente sao: ");
							for (i=0; i<v; i++){
							printf(" %d", vetor[i]);
							}
							printf("\n\n");
							system("pause");
							break;
						} //case 2 submenu do Arrays
												
						case '3':{
							system("cls");
							printf("\n\n****Este programa vai calcular a soma de todos os valores****");
							for(i=0;i<10;i++){
								printf("\nInsira um numero inteiro: ");
								scanf("%d", &v1[i]);	
							}
							
							//Calcula a soma de valores introduzidos
												
							printf("\nA soma de %d + %d + %d + %d + %d + %d + %d + %d + %d + %d = %d\n", v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v1[7], v1[8], v1[9], v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5] +v1[6] + v1[7] + v1[8] + v1[9]);
							system("pause");
							break;
						}	
						
						case '0':{
							break;
						}
						
						default:{
							system("cls");
							printf("\n\n-----Opcao nao existente. Tente novamente ----");
							system("pause");
							break;
						}
						
					} //switch submenu do Arrays
				} //do Arrays
				while(arrays != '0');
				break;
			} //case 1 Arrays
			
			
			case '2':{	
				do{	
					system("cls");
					printf("\n\n-------Formulas Matematicas-----");
					printf("\n\n-------1 - Areas-----");
					printf("\n\n-------2 - Volumes-----");
					printf("\n\n-------3 - Formula resolvente-----");
					printf("\n\n-------0 - Voltar-------");
					printf("=>");
					scanf(" %c", &form);
					
					
					switch(form){	
						case '1':{
							do{	
								system("cls");
								printf("\n\n----------Areas--------");
								printf("\n\n-------1 - Circulo-----");
								printf("\n\n-------2 - Triangulo---");
								printf("\n\n-------3 - Retangulo---");
								printf("\n\n-------0 - Voltar------");;
								printf("=>");
								scanf(" %c", &areas);
									
									
								switch(areas){
									case '1':{
										system("cls");
										printf("\n\n------------Circulo------------\n\n");
										printf("       ***\n");
										printf("     *     *\n");
										printf("     *     *\n");
										printf("       ***  \n");
										printf("\n***Este programa vai calcular a area do circulo:**** ");
										printf("\n\nInsira o raio do circulo: ");
									    scanf("%lf", &radius);
									    double area = M_PI * pow(radius, 2);
									    printf("\nA area do circulo = %.3lf\n", area);
										system("pause");
										break;
									}										
									
									case '2':{
										system("cls");
										printf("\n\n------------Triangulo------------\n\n");
										printf("           **\n");
										printf("          * *\n");
										printf("         *  *\n");
										printf("        *****\n");
										printf("\n***Este programa vai calcular a area do triangulo:**** ");
										double base, height;
									    printf("\n\nInsira o valor da base do triangulo: ");
									    scanf("%lf", &base);
									    printf("\nInsira o valor da altura do triangulo: ");
									    scanf("%lf", &height);
									    double area = (base * height) / 2;
									    printf("\nA area do triangulo = %.3lf\n", area);
										system("pause");
										break;
									}								
									
									case '3':{
										system("cls");
										printf("\n\n------------Retangulo------------\n\n");
										printf("      *********\n");
										printf("      *       *\n");
										printf("      *********\n");
										printf("\n***Este programa vai calcular a area do retangulo:**** ");
										double base, height;
									    printf("\n\nInsira o valor da base do retangulo: ");
									    scanf("%lf", &base);
									    printf("\nInsira o valor da altura do retangulo: ");
									    scanf("%lf", &height);
									    double area = area_rectangle(base, height);
									    printf("\nA area do retangulo = %.3lf\n", area);
										system("pause");
										break;
									}
									
									case '0':{
										break;
									}
									
									default:{
										system("cls");
										printf("\n\n-----Opcao nao existente. Tente novamente----");
										system("pause");
										break;
									}								
											} //switch submenu de Areas
								} //do Areas
							while(areas != '0');
								break;																
									} //case 1 Areas
			 	
	
						case '2':{
							do{
								system("cls");
								printf("\n\n---------Volumes--------");
								printf("\n\n-------1 - Piramide-----");
								printf("\n\n-------2 - Cubo---------");
								printf("\n\n-------3 - Esfera-------");
								printf("\n\n-------0 - Voltar-------");
								printf("=>");
								scanf(" %c", &vol);
								
						
								switch(vol){
									case '1':{
										system("cls");
										printf("\n\n------------Piramide------------\n\n");
										printf("           \n");
										printf("           *\n");
										printf("          ***\n");
										printf("         * *  *  \n");
										printf("        *  *    *\n");
										printf("       *   *      * \n");
										printf("      *    *        * \n");
										printf("     *     *     *     \n");
									    printf("       *   *  *        \n");
										printf("           *             \n");
										printf("\n\n***Este programa vai calcular a area da piramide:**** ");
										double base, slant_height, height;
									    printf("\n\nInsira o valor da base da piramide: ");
									    scanf("%lf", &base);
									    printf("\nInsira o valor da altura lateral da piramide: ");
									    scanf("%lf", &slant_height);
									    printf("\nInsira o valor da altura da piramide: ");
									    scanf("%lf", &height);
									    double area = (base + (4 * slant_height)) * height / 2;
									    printf("\nA area da piramide = %.3lf\n", area);
										system("pause");
										break;
									}								
										
									case '2':{
									system("cls");
									printf("\n\n------------Cubo------------");
									printf("\n\n***Este programa vai calcular a area do cubo:**** ");
									double side;
								    printf("\n\nInsira o valor do lado do cubo: ");
								    scanf("%lf", &side);
								    double area = 6 * side * side;
								    printf("\nA area do cubo e %.3lf\n", area);
								    system("pause");
									break;
								}									
									
									case '3':{
									system("cls");
									printf("\n\n------------Esfera------------");
									printf("\n\n***Este programa vai calcular a area da esfera:**** ");
									double radius;
								    printf("\n\nInsira o valor do raio da esfera: ");
								    scanf("%lf", &radius);
								    double area = 4 * PI * radius * radius;
								    printf("\nA area da esfera e %.3lf\n", area);
										system("pause");
										break;
								}								
								
									case '0':{
										break;
								}
								
									default:{
										system("cls");
										printf("\n\n-----Opcao nao existente. Tente novamente ----");
										system("pause");
										break;
										
									} //default
											} // switch, submenu de Volumes
								} //do Volumes	
							
							while(vol != '0');
								break;
									} // case 2 Volumes
					
					
						case '3':{
							system("cls");
							printf("\n\n------------Formula resolvente------------");
							printf("\n\n***Este programa vai resolver a formula seguinte:**** ");
							printf("\nx=(-b+sqrt((b*b)-4*a*c))/2*a");
							printf("\nx=(-b-sqrt((b*b)-4*a*c))/2*a\n");
				      		printf("\nIntroduza o valor de (a)\n");
				      		scanf("%d",&a);
				      			if(a==0){
       								printf("\t\nA equacao e impossivel\n");
       				
                				}else{
						          printf("\t\nIntroduza o valor de (b)\n");
						          scanf("%d",&b);
						          printf("\t\nIntroduza o valor de (c)\n");
						          scanf("%d",&c);
						          delta=(b*b)-4*a*c;
            						if (delta<0){
              							printf("\t\nRaizes Complexas\n");
              			
				             		}else if(delta==0){
				                 		printf("\t\nExiste uma raiz\n");
				                 		y= sqrt(delta);
				                 		y1=(-b+y)/(2*a);
				                 		printf("\t\nprimeiro resultado -> %.2f ",y1);
                 		
				               		}else{
				               			printf("\t\nExistem duas raizes\n");
				               			y=sqrt(delta);
				               			y1=(-b+y)/(2*a);
				               			y2=(-b-y)/(2*a);
				               			printf("\t\nPrimeiro resultado -> %.2f\n",y1);
				              			printf("\t\nSegundo resultado -> %.2f\n",y2);
				               		}
      							}				
							system("pause");
							break;
						}
						
						case '0':{
							break;
						}
						
						default:{
							system("cls");
							printf("\n\n-----Opcao nao existente. Tente novamente ----");
							system("pause");
							break;
						}
						
								} //switch Areas
					} // do Formulas matematicas	
						while (form !='0');
							break;
						} // case 2 Formulas matematicas
						
						
			case '0':{
				system("cls");
				printf("\n\n-------Saiu do programa-----");
				system("pause");
				break;
			}
			
			default:{
				system("cls");
				printf("\n\n-----Opcao nao existente. Tente novamente ----");
				system("pause");
				break;
			}
			
		} //switch Arrays
	} //do menu Principal
	while(op != '0');
}//main

