#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x=0;
    do
    {
        printf("\n Elije una opcion : \n");
        printf("\n 1- Abuelos paternos y maternos ");
        printf("\n 2- Padre  ");
        printf("\n 3- Madre  ");
        printf("\n 4- Hermano ");
        printf("\n 5- SALIR FIN DEL PROGRAMA \n");
        printf("\n OPCION ELEGIDA: ");
        scanf("%d",&x);
		system("cls");
        switch(x)
        {


            case 1:
                printf("\n\n");
				printf("\n\t\t Abuelos paternos \t\t");
                printf("\n Tereso y Zenaida \n");
                printf("\n\t\t Abuelos maternos \t\t");
                printf("\n Alfonso y Leovigilda \n");
                printf("\n\n");
                break;

            case 2:
                printf("\n\n");
                printf("\n\t\t Padre \t\t");
                printf("\n Eduardo Miguel \n ");
               
				printf("\n\n");
                break;

            case 3:
                printf("\n\n");
                printf("\n\t\t Madre \t\t");
                printf("\n Adelina Lozano \n");
                printf("\n\n");
                break;

            case 4:
            	printf("\n\n");
            	printf("\n\t\t Hermano \t\t");
                printf("\n Genaro miguel \n");
                printf("\n\n");
                break;
                default:
                printf("Fin del Programa \n");
                printf("\n\n");
        }
    }while(x<=4&&x>0);
    return 0;
}
