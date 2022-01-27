/*Raihan Fadhil Yanuarsyah 13220049*/
/*Deskripsi :*/
/*Round Robin Scheduling*/

#include <stdio.h>
#include <conio.h>

int main(){
    int jumlah_proses;
    int i;
    int y;
    int waktu_kuantum;
    int waktu_tunggu = 0;
    int waktu_penyelesaian = 0;
    int waktu_datang[10];
    int waktu_eksekusi[10];
    int temp[10];
    int sum = 0;
    int count = 0;

    printf("Masukan jumlah proses : \n");
    scanf("%d", &jumlah_proses); /*Mengassign nilai untuk jumlah proses*/

    /*Memasukan waktu kuantum*/
    printf("Masukan waktu kuantum :\n");
    scanf("%d", &waktu_kuantum);

    /*Loop untuk memasukan waktu datang dan waktu eksekusi*/
    for (i = 0; i < jumlah_proses; i++)
    {
        printf("Masukan waktu datang dan waktu eksekusi P[%d]\n",i);
        printf("Waktu datang: \n");
        scanf("%d", &waktu_datang[i]); /*Mengassign waktu datang untuk proses ke i*/
        printf("Waktu eksekusi: \n");
        scanf("%d", &waktu_eksekusi[i]); /*Mengassign waktu eksekusi untuk proses ke i*/
    }
     
    /*Penampilan hasil dan perhitungan*/
    printf("Proses \t\t Waktu Eksekusi \t\t Waktu Penyelesaian \t\t Waktu Tunggu");

    y = jumlah_proses; /*Memindahkan sementara jumlah proses ke variabel y*/
    for ( sum = 0; i = 0; y!=0;)
    {
        if (temp[i] <= waktu_kuantum && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - waktu_kuantum;
            sum = sum + waktu_kuantum;
        }
        
        /*Penampilan*/
        if (temp[i] == 0 && count == 1)
        {
            y--; /*Dekremen jumlah proses*/
            printf("P[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i, waktu_eksekusi[i], sum-waktu_datang[i], sum-waktu_datang[i]-waktu_eksekusi[i]);
        }
        
        
        
    }
    
    return 0;   
}
/*Referensi : https://www.javatpoint.com/round-robin-program-in-c*/
