#include <stdio.h>
#include <stdlib.h>

int *dizi_birlestir(int[], int, int[], int );

int main()
{
    int liste_1[8]= {1, 2, 3, 4, 5, 6, 7, 8};

    int liste_2[8]= {8, 7, 4, 5, 6, 1, 2, 3};
    //sonucun dondurulmesi icin pointer tanimliyoruz
    int *son;
    son = dizi_birlestir(liste_1, 8, liste_2, 8);

    // son aslinda bir pointer lakin asagıda liste gibi davranicak.

    printf(" iki liste birlesimi:\n{ ");
    for(int i = 0; i<16; i++)
    printf("%d ", son[i]);

    printf("}");

    return;

}

int *dizi_birlestir(int dizi1[], int dizi1_boyut, int dizi2[], int dizi2_boyut)
{
    int *sonuc = (int*)calloc(dizi1_boyut + dizi2_boyut, sizeof(int)); // iki listenin toplami buyuklugunde bir alana ihtiyacimiz var. Bunu da calloc fonk ile hallediyoruz.
    // Ve bu alanı gosteren pointer'a sonuc adini verdim. Asagida liste gibi davranacaktir.

    int i,k;

    for(i=0; i<dizi1_boyut; i++) //İlk listeyi sonuca yerlestiriyor.
        sonuc[i] = dizi1[i];
    for(k=0; k< dizi2_boyut; k++, i++) // ikinci listeyi sonuca ekliyor.
        sonuc[i] = dizi2[k];

    return sonuc; // bana fonksiyonu yazmam istenirse sonucu dondurecek


}
