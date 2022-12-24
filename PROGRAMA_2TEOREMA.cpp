#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main (){
char si [10]; 
float cata, catb, hipo, cat, hipo2, cat2;

printf ("QUERIDO USUARIO ANTES DE EMPEZAR QUIERE SACAR LA HIPOTENUSA?, EN CASO DE QUE RESPONDA QUE SI SE LE PEDIRA ALGUNOS DATOS SI ES LO CONTRARIO SE SACARA EL CATETO\n"); 
scanf ("%s", char);          

if (si==si){
printf ("INGRESE EL CATETO A\n"); 
scanf ("%f", &cata); 
printf ("AHORA INGRESE CATETO B\n"); 
scanf ("%f", &catb); 
(hipo= sqrt((pow(cata,2))+(pow(catb,2)))); 
printf ("TU MEDIDA DE LA HIPOTENUSA ES: %f", hipo); 
}
 else {
printf ("INGRESE LA MEDIDA DE CUALQUIER CATETO\n"); 
 	scanf ("%f", &cat); 
printf ("INGRESE LA MEDIDA DE LA HIPOTENUSA\n"); 
 	scanf ("%f", &hipo2); 
(cat2= sqrt((pow(hipo2,2))+(pow(cat,2)))); 
printf ("TU MEDIDA DE LA HIPOTENUSA ES: %f", cat2); 
 }


getch (); 
return 0;	
	
}

