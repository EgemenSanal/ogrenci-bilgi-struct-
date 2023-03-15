#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
	char adres[30];
	
};

int main(int argc, char *argv[]) {
	
	struct ogrenci ogrenciBilgi;
	
	int i = 0;
	
	for(i =0;i<5;i++){
		printf("%d. Ogrencinin Adini Giriniz\n",i+1);
		gets(ogrenciBilgi.ad);
		printf("%d. Ogrencinin Soyadini Giriniz\n",i+1);
		gets(ogrenciBilgi.soyad);
		printf("%d. Ogrencinin Numarasini Giriniz\n",i+1);
		scanf("%d",&ogrenciBilgi.numara);
		getchar();
		printf("%d. Ogrencinin Adresini Giriniz\n",i+1);
		gets(ogrenciBilgi.adres);
		
			
	}
	
	printf("5 OGRENCININ BILGILERI =\n");
	
	int j = 0;
	
	for(j = 0;j<5;j++){
		printf("%d. Ogrenci Adi = ",j+1);
		puts(ogrenciBilgi.ad);
		printf("\n");
		printf("%d. Ogrenci Soyadi = ",j+1);
		puts(ogrenciBilgi.soyad);
		printf("\n");
		printf("%d. Ogrencinin Numarasi = %d\n",j+1,ogrenciBilgi.numara);
		printf("\n");
		printf("%d. Ogrencinin Adresi = ");
		puts(ogrenciBilgi.adres);
		printf("\n");
		
		
	}	
	
	return 0;
}
