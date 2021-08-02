#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	//Variables
	int a,b,c,d,e;
	char cadena1[100], cadena2[100], cadena3[100], cadena4[100], cadena5[100];
	//Intrucciones
	printf("Ingrese el primer Nombre: ");
	gets (cadena1);
	
	printf("Ingrese el segundo Nombre: ");
	gets(cadena2);
	
	printf("Ingrese el tercer Nombre: ");
	gets(cadena3);
	
	printf("Ingrese el cuarto Nombre: ");
	gets(cadena4);
	
	printf ("Ingrese el quinto Nombre: ");
	gets(cadena5);
	
	a=strlen(cadena1);
	printf("\nLa cantidad de letras del primer Nombre es de: %d\n",a);
	
	b=strlen(cadena2);
	printf("\nLa cantidad de letras del segundo Nombre es de: %d\n",b);
	
	c=strlen(cadena3);
	printf("\nLa cantidad de letras del tercer Nombre es de: %d\n",c);
	
	d=strlen(cadena4);
	printf("\nLa cantidad de letras del cuarto Nombre es de: %d\n",d);
	
	e=strlen(cadena5);
	printf("\nLa cantidad de letras del quinto Nombre es de: %d\n",e);
	
	if(a<b && a<c && a<d && a<e){
		printf("\nEl Nombre mas corto es: %s\n", cadena1);
	}
	else if(b<a && b<c && b<d && b<e){
		printf("\nEl Nombre mas corto es: %s\n", cadena2);
	}
	else if(c<a && c<b && c<d && c<e){
		printf("\nEl Nombre mas corto es: %s\n", cadena3);
	}
	else if(d<a && d<b && d<c && d<e){
		printf("\nEl Nombre mas corto es: %s\n", cadena4);
	}
	else if(e<a && e<b && e<c && e<d){
		printf("\nEl Nombre mas corto es: %s\n\n", cadena5);
	}

	system("PAUSE");	
}
