#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>


int main (){

int cata, catb, hipo; 
printf ("TE AYUDAREMOS A SACAR LA HIPOTENUSA\n");
printf ("INGRESA LA MEDIDA DEL CATETO A\n"); 
scanf ("%d", &cata); 

printf ("INGRESA LA MEDIDA DEL CATETO B\n"); 
scanf ("%d", &catb); 

hipo= sqrt((pow(cata,2))+(pow(catb,2)));

printf ("TU RESULTADO DE LA HIPOTENUSA ES: %d\n", hipo); 



getch (); 
return 0;	
	
}




