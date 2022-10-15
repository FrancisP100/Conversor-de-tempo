#include <stdio.h>
main()
{
     long int x;
    float res;
    char unity;
 
    printf("Escolha um número de dias: \n");
    scanf("%d",&x);
    printf("Deseja ver em (H/M/A): \n");
    scanf(" %c",&unity);
 switch (unity)
    {
    case 'H' :
    case 'h' :
        res =  x * 24;
        break;
    case 'm' :
    case 'M' :
        res = x / 31;
        break;
    case 'a' :
    case 'A' :
        res = x / 365 ;
        break;

    default:
           printf("Unidade   inválida\n"); 


        break;
    }
    printf("%dd equivale a %.0f%c", x, res, unity);
}