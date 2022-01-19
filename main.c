#include <stdio.h>
#include <stdlib.h>
//Putri Alfiyyahdianti
//NIM : 18320041
//TUGAS 1 PMC


void main()
{
    int a=0 ;
    int b=0 ;
    int step= 0 ;

    while ( b != 4)
    {   printf("Buatlah salah satu ceret menjadi berisi 4 liter\n");
        printf("Isi ember 3 liter: %d liter\n" ,a);
        printf("Isi ember 5 liter: %d liter\n" , b);
        printf(" Pilih nomor instruksi :\n");
        printf(" 1. Isi ceret 3 liter\n");
        printf(" 2. Isi ceret 5 liter \n");
        printf(" 3. Tuang isi ceret 3 liter ke ceret 5 liter\n");
        printf(" 4. Tuang isi ceret 5 liter ke ceret 3 liter\n");
        printf(" 5. Kosongkan ceret 3 liter\n");
        printf(" 6. Kosongkan ceret 5 liter\n");

        int c;
        printf(" Masukkan nomor instruksi yang dipilih :");scanf("%d",&c);

        if (c == 1){
            a = 3;
        }
        else if (c == 2){
                b=5;
        }
        else if (c == 3){
                if (b ==5){
                    printf("Bejana 5 liter sudah penuh");
                }
                else if ( (a+b) <= 5){
                    b += a;
                    a = 0;
                }
                else {
                    a = (a+b)-5;
                    b =5;
                }
            }
        else if (c == 4){
                if (a==3){
                    printf("Bejana 3 liter sudah penuh");
                }
                else if ( (a+b <= 3)){
                    a+=b;
                    b=0;
                }
                else{
                    b = (a+b) -3;
                    a=3;
                }
        }
        else if (c == 5 ){
            a -= a;
        }
        else if (c == 6){
            b -=b;
        }
        else {
            printf("Pilihan tidak valid, silahkan pilih ulangi\n");
            step -=1;
        }
        step += 1;
    }
    printf("Selamat anda berhasil. jumlah step Anda: ",step);

}



