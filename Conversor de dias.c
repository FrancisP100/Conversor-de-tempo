#include <stdio.h>
main()
{
     long int x;
    float res;
    char unidade;
 /* Utilidade questionável
 Estor a aprender novas coisas vais curtir bué*/
    printf("Escolha um número de dias: \n");
    scanf("%d",&x);
    printf("Deseja ver em (H/M/A): \n");
    scanf(" %c",&unidade);
 switch (unidade)
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
/* Depois de aprender C# posso criar uma interface gráfica para estes projectos */

        break;
    }
    printf("%d equivale a %.0f%c", x, res, unidade);
}
