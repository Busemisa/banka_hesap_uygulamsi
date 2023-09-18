#include <stdio.h>

int main() {
    float bakiye;
    int secim;
    float miktar;

    printf("Baslangic bakiyenizi girin: ");
    scanf("%f", &bakiye);

    while (1) { // Sonsuz döngü
        printf("\nBanka Islemleri:\n");
        printf("1. Bakiye Sorgulama\n");
        printf("2. Para Cekme\n");
        printf("3. Para Yatirma\n");
        printf("4. Para Gonderme\n");
        printf("5. Cikis\n");
        printf("Seciminizi girin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Bakiyeniz: %.2f TL\n", bakiye);
                break;
            case 2:
                printf("Cekmek istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > 0 && miktar <= bakiye) {
                    bakiye -= miktar;
                    printf("Yeni bakiyeniz: %.2f TL\n", bakiye);
                } else {
                    printf("Gecersiz islem. Lutfen gecerli bir miktar girin.\n");
                }
                break;
            case 3:
                printf("Yatirmak istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > 0) {
                    bakiye += miktar;
                    printf("Yeni bakiyeniz: %.2f TL\n", bakiye);
                } else {
                    printf("Gecersiz islem. Lutfen gecerli bir miktar girin.\n");
                }
                break;
            case 4:
            	printf("göndermek istediğiniz yeri seçinz : 1)Vadeli hesaba 2)Yatirim hesabina");
            	int hesap;
            	
            	scanf("%d",&hesap);
        
            	switch(hesap){
            		case 1:
            	printf("Vadeli Hesabınıza Gondermek istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > 0 && miktar <= bakiye) {
                    
                   
                    printf("%.2f TL Vadeli Hesabiniza para gonderildi.\n", miktar);
                    bakiye -= miktar;
                } else {
                    printf("Gecersiz islem. Lutfen gecerli bir miktar girin.\n");
                }
                break;
                
                case 2:
                	printf("Yatırım Hesabınıza Gondermek istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > 0 && miktar <= bakiye) {
                   
                   
                    printf("%.2f TLYatırım Hesabınıza para gonderildi.\n", miktar);
                    bakiye -= miktar;
                } else {
                    printf("Gecersiz islem. Lutfen gecerli bir miktar girin.\n");
                }
                break;
                	
				}
               
                
                
            case 5:
                printf("Cikis yapiliyor...\n");
                return 0;
            default:
                printf("Gecersiz secim. Lutfen gecerli bir secenek secin.\n");
                
                }
        }
        
           return 0;
    }




