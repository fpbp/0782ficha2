#include <stdio.h>

int main(void){
    
float n1;
int menu;
float lib=2.2;
float kg=1;
float final;

printf("Insere (1) para converter de KG para LB, qualquer outro numero resulta de LB para KG\n");
scanf("%d",&menu);
printf("Insira a media :\n");
scanf("%f",&n1);

if (menu=1)
{
final = n1*lib;
printf("%.1fKG é %.1fLB\n",n1,final);
    
}else{
final = n1/lib;
printf("%.1fLB é %.1fKG\n",n1,final);
   
    }
}
    
}