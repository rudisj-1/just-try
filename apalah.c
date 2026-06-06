#include <stdio.h>

char nama [50];
int umur;

int main(){
printf("siapa nama kamu: ");
scanf("%s",nama);
printf("berapa umur kamu: ");
scanf("%d",&umur);
printf("hai nama saya %s umur saya %d terimakasih", nama,umur);
return 0;
}