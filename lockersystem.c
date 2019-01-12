#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){

 int rastgele,cvp;
 
    srand(time(NULL)); 
    rastgele=99+rand()%999;
     


printf("\n\n\n\nrobot kontrol icin gordugunuz sayiyi yaziniz.\n\n");

printf("rakamlar = %d\n",rastgele);

printf("rakamlari giriniz = ");

scanf("%d",&cvp);

if(rastgele == cvp)
	{
		
	


int z,i,sayi,sifre, cevap,yildiz,symbol,yanlis ;



yildiz= 42;

symbol= 3;

yanlis= 215;

sifre = 513806; 
printf("\n\n\n\n");
//01000010 01010011 01001011 01001110
printf("    ########   ######  ##    ## ##    ##\n");
printf("    ##     ## ##    ## ##   ##  ###   ##\n");
printf("    ##     ## ##       ##  ##   ####  ##\n");
printf("    ########   ######  #####    ## ## ##\n");
printf("    ##     ##       ## ##  ##   ##  ####\n");
printf("    ##     ## ##    ## ##   ##  ##   ###\n");
printf("    ########   ######  ##    ## ##    ##  Software\n\n");
printf("\n\n\n\n");

printf("%c6 haneli sifreyi gir%c =",symbol,symbol);

scanf("%d",&cevap);

sayi=cevap;
z=0;
while(sayi>0)  
{
  z++;  
  sayi/=10;     
}
if(z == 6){
	
	if (cevap == sifre) {
		printf("%csifre dogru%c\n",yildiz,yildiz);
	
	}
	else {
   	 printf("%cyanlis sifre girdiniz.%c\n",yanlis,yanlis);
	}}
else{
printf("girdiginiz sayi 6 basamakli degil\n");
}
	}
else{
printf("\n\nbir yanliþiklik oldu...\n\n");
}


getch();

return(0);
}
