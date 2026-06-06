#include <stdio.h>
#include <string.h>

//keren jir
char nama [50];
int umur;
struct book{
char judul [50];
int halaman;
int harga;
};
int main(){
printf("siapa nama kamu: ");
scanf("%s",nama);
printf("berapa umur kamu: ");
scanf("%d",&umur);
printf("hai nama saya %s umur saya %d terimakasih\n", nama,umur);
struct book buku1;
strcpy(buku1.judul,"laskar pelangi");
buku1.halaman = 50;
buku1.harga = 1000;
printf("Judul: %s\n",buku1.judul);
printf("Halaman: %d\n", buku1.halaman);
printf("Harga: %d\n",buku1.harga);
return 0;
}
