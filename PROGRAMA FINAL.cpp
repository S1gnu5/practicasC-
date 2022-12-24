#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
	int dec, dec2, ins, calf, calf2, fin;
	
	printf ("Hola, elije la opcion que quieras ingresar\n"); 
	printf ("Pon el numero\n 1. Para que ingreses como estudiante\n 2. Para que quieras ser estudiante\n"); 
	scanf ("%d", &dec); 
	
	if (dec==1){
		printf ("Que opcion quieres realizar;\n 1.Fecha de reinscripcion\n 2.Descuento de inscripcion base a tu promedio\n 3.Precio de reinscripcion y requisitos\n 4.Revisar final de alguna materia\n");
		scanf ("%d", &dec2);
	switch (dec2){
		case 1: printf ("\n2 al 6 de agosto: Reinscripciones de tercero y quinto semestre\n");
		printf ("\nCuidate, saludos cordiales\n");
		break; 
		case 2: printf ("\nPon tu promedio que obtuviste al final del semestre, para sacar el porcentaje obtenido\n"); 
		scanf ("%d", &ins); 
		ins= (ins*100)/10;
		printf ("\nTu porcentaje obtenido es: %d", ins);
		printf ("\nCuidate, saludos cordiales\n");
		break; 
		case 3: printf ("\nPago de derechos correspondientes que aporta el aspirante es de $1,094.00 MN\nRequisitos calendario\nLos requisitos solicitados para el tramite de Reinscripcion de acuerdo a lo indicado en la Convocatoria y Calendario Escolar son los siguientes:\nContar con la autorizacion de la Subdireccion Academica del Plantel o Centro EMSAD.\nHaber aprobado todas las asignaturas del semestre anterior (sin excepcion).\nSolicitud de Reinscripcion emitida por el Sistema de Control Escolar. (SAESC)\n\nCarta Compromiso emitida por el Sistema de Control Escolar. (SAESC).\nRealizar el tromite en la fecha que establece el calendario del ciclo escolar lectivo y hora establecida por el Plantel o Centro EMSAD");
		printf ("Recuerda que el pago de derechos puede variar base a tu promedio, lo puedes checar en la opcion 1\n"); 
		printf ("\nCuidate, saludos cordiales\n");
		break; 
		case 4: printf ("\nPara checar si estas en final de una materia es importante que consultes tus calificaciones tanto del primer parcial como el segundo\n"); 
		printf ("\nDime tu calificacion del primer parcial\n"); 
		scanf ("%d", &calf); 
		printf ("\nAhora tu calificacion del segundo parcial\n"); 
		scanf ("%d", &calf2); 
		fin= calf+calf2; 
		if (fin>15){
			printf ("\nNo estas en final, FELICIDADES\n"); 
			printf ("\nCuidate, saludos cordiales\n");
		}
		else {
			printf ("\nEstas en final, consulta a tu profesor para mas informacion\n");
			printf ("\nCuidate, saludos cordiales\n"); 
		}
		break; 
	}
	}
	
	else {
		printf ("\nLos beneficios educativos se encuentra el obtener la capacitacion para el trabajo en alguna de las 7 especialidades:\nTecnologias de la Informacion y Comunicacion\nLaboratorista Quimico\nContabilidad\nDibujo Arquitectonico y de Construccion\nTramitacion Aduanal\nAsistente de Operaciones Logisticas\nTurismo y Auxiliar de Enfermeria\n");
	    printf ("\nREQUISITOS:\n=>Formato de Resultados de COMIPEMS\n=> Solicitud de Inscripción (Obtener de SAESC)\n=> Carta Compromiso (Descargar de SAESC)\n=> Certificado de Secundaria\n=> Acta de Nacimiento\n=> Clave CURP\n=> Comprobante de pago\n=> Escrito de Salud (En una hoja blanca con lugar y fecha, describir el estado actual de salud del alumno(a), mencionar si es alérgico o no a algún medicamento, si es apto para realizar actividades fisicas o no)\n=> Comprobante de Domicilio\n=> INE del padre o tutor\n=> Fotografía Digital a color en formato jpg.\n");
	    printf ("\nSera casi un mes que durara este trámite que se hace en línea. Generalmente las fechas son las siguientes:\n02 al 12 de febrero se inscriben la inicial M\n03 al 13 de febrero se inscriben la inicial G\n04 al 14 de febrero se inscriben la inicial R\n05 al 15 de febrero se inscriben la inicial C y D\n06 al 16 de febrero se inscriben la inicial A\n07 al 17 de febrero se inscriben la inicial S y T\n08 al 18 de febrero se inscriben la inicial U, V, W, X, Y y Z\n09 al 19 de febrero se inscriben la inicial N, O, P y Q\n10 al 20 de febrero se inscriben la inicial H, I y J\n11 al 21 de febrero se inscriben la inicial K, L y Ñ\n12 al 22 de febrero se inscriben la inicial B\n13 al 23 de febrero se inscriben la inicial E y F\n");
		printf ("\nPago de derechos correspondientes; \n La cuota voluntaria que aporta el aspirante es de $1,094.00 MN\n");
		printf ("\nPara mas informacion consulte la escuela, espero que la guia sea de su agardo;)");
	}
	
	
	
	
	getch (); 
	return 0; 
}












