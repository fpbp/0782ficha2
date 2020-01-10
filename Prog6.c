#include <stdio.h>

int main(void){
int x;
int y;

printf("Insira um valor(x): ");
scanf("%d", &x);
printf("Insira outro valor(y): ");
scanf(" %d", &y);
if(x==y){
printf("%d + %d = %d\nAmbos valores são iguais\n", x, y, x+y, x, y);
}else{
if(x>y){
printf("%d + %d = %d\n%d é maior do que %d\n", x, y, x+y, x, y);
}else{
printf("%d + %d = %d\n%d é maior do que %d\n", x, y, x+y, y, x);
}
}
}