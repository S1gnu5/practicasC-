#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
	
	int num1, num2, resul, resu1, resu2, resu3; 
	
	printf ("INGRESA UN NUMERO\n");
	scanf ("%d", &num1);
	
	printf ("INGRESA OTRO NUMERO\n");
	scanf ("%d", &num2);
	
	resul= num1+num2; 
	printf ("en suma es %d\n", resul);
	resu1= num1/num2;
	printf ("en division es %d\n", resu1);
	resu2= num1*num2; 
	printf ("en multiplicacion es %d\n", resu2);
	resu3= num1-num2; 
	printf ("en resta es %d\n", resu3);
	
	
	
	
	
	
	
getch (); 
return 0;	
	
}






