#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main (){

int a, b, c, resulmen, resulmas; 
// test
printf ("TE AYUDAREMOS A SOLUCIONAR UNA ECUACIÓN DE SEGUNDO GRADO\n"); 

printf ("RECUERDA QUE LOS DATOS QUE TE VAMOS A PEDIR SERA A BASE DE ESTA ECUACION: (a)x^2+(b)x+c=0\n"); 
printf ("AHORA BIEN TE PEDIRE EL VALOR DE a\n");
scanf ("%d", &a); 

printf ("TE PEDIRE EL VALOR DE b\n"); 
scanf ("%d", &b); 

printf ("POR ULTIMO TE PEDIRE EL VALOR DE c\n"); 
scanf ("%d", &c); 

printf ("TE DAREMOS DOS RESULTADOS BASE A LA FORMULA GENERAL\n"); 

resulmas= (-b+(sqrt((pow(b,2)-4*a*c))))/2*a; 

printf ("TU RESULTADO DEL X DE LA SUMA ES: %d\n", resulmas);

resulmen= (-b-(sqrt((pow(b,2)-4*a*c))))/2*a; 

printf ("TU RESULTADO DEL X DE LA RESTA ES: %d\n", resulmen);

getch (); 
return 0;	
	
}



