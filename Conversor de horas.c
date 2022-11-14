#include <stdio.h>
main()
{
     long int x;
    float res;
    char unidade;
 
    printf("Escolha um numero de horas: \n");
    scanf("%d",&x);
    printf("Deseja ver em (D/M/A): \n");
    scanf(" %c",&unidade);
 switch (unidade)
    {
    case 'd' :
    case 'D' :
        res =  x / 24;
        break;
    case 'm' :
    case 'M' :
        res = x / 720;
        break;
    case 'a' :
    case 'A' :
        res = x / (720 * 12) ;
        break;

    default:
           printf("Unidade   invalida\n"); 


        break;
    }
    printf("%dh equivale a %.0f%c", x, res, unidade);
}
