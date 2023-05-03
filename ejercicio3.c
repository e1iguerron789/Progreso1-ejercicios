/*Construya un programa que calcule la suma de los términos de la serie: El usuario debe ingresar el valor de n. Tenga en cuenta que entre más grande sea n, el resultado debe acercarse a 1.*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int i,num,cont,den=2,expon;
    
    printf("    Bienvenido\n");
    printf("Ingrese el numero de veces que quiere repetir la serie:");
    scanf("%d",&num);

    do{
        for (i=1;i<=num;i++){
            
          den=pow(den,i);
           printf("%d\n",den);  
        }
         cont++;
    }while(cont<=num);

    
  
  return 0 ;
}