#include<stdio.h>
int acum=0,nota_M=0,nota_m=30,cant_a=0,cant_r=0,i;
float prom,notas[5];
main()
{	
	//Entrada y validacion de datos
	for(i=0;i<5;i++)
	{
		do
		{
			if (notas[i]>20)
			printf("\n\aError: Intentelo de nuevo...\n\n");
			printf("Introduzca la nota %i: ",i+1);
			scanf("%f",&notas[i]);	
		}while(notas[i]>20);
		
		acum+=notas[i];
		
			nota_M=notas[i];
			
		if (notas[i]<nota_m)
			nota_m=notas[i];	
		
		if (notas[i]>=10)
			cant_a++;
		else
			cant_r++;	
	}
	prom=acum/5;
	
	//Salida de datos
	printf("\nPulse cualquier tecla para continuar: \n");getch();
	printf("\nEl promedio es: %.2f",prom);		
	printf("\nCantidad de alumnos aprovados: %i",cant_a);
	printf("\nCantidad de alumnos reprovados: %i",cant_r);
	printf("\nLa nota nayor es: %i",nota_M);
	printf("\nLa nota menor es: %i",nota_m);
	printf("\n\nFelicidades a todos los alumnos aprovados.\nA los que no aprovaron a reparar por flojos!\n");
//Made by HPL	
}