/*Nama : Raihan Fadhil Yanuarsyah*/
/* NIM : 13220049 */

/* Deskripsi :*/
/* Program ini adalah puzzle water jug 3 dan 5 liter, pengguna harus menghasilkan 4 liter dari kedua water jug tersebut */
/* Program ini dapat dimainkan dengan menginput salah satu angka dari 1-6, angka dari 1-6 merepresentasikan salah satu instruksi */
/* Program ini akan berakhir apabila pengguna berhasil menghasilkan water jug yang berisi 4 liter */

#include <stdio.h>

int main(){
    int a = 0;  /* Inisialisasi variabel a sebagai water jug 3 liter */
    int b = 0;  /* Inisialisasi variabel b sebagai water jug 5 liter */
    int command;    /* Inisialisasi variabel command sebagai instruksi */

    printf("Selamat datang di permainan Waterjug!\n");
    printf("Isilah kedua wadah ini sampai salah satunya berisi 4 liter!\n");
    
    while (b != 4)  /* Program akan tetap di dalam pengulangan selama water jug b belum berisi 4 liter */
    {
        /* code */
        printf("Wadah A Maks 3 liter         Wadah B Maks 5 liter\n");  /* Tampilan program */
        printf("           %d                          %d\n", a, b);
        printf("Silahkan pilih instruksi di bawah ini!\n");
        printf("1. Isi Wadah A\n");
        printf("2. Isi Wadah B\n");
        printf("3. Tuang isi A ke B\n");
        printf("4. Tuang isi B ke A\n");
        printf("5. Kosongkan isi A\n");
        printf("6. Kosongkan isi B\n");

        scanf("%d", &command);  /* Membaca input instruksi dari pengguna */

        /* Percabangan-percabangan sesuai input instruksi */
        if (command == 1) /* Isi wadah a */
        {
            a = 3;  /* Langsung mengassign 3 karena setiap mengisi harus sampai penuh */
        }
        else if (command == 2)  /* Isi wadah b */
        {
            b = 5;  /* Langsung mengassign 5 karena setiap mengisi harus sampai penuh */
        }
        else if (command == 3)  /* Tuang isi A ke B */
        {
            if ((a+b) > 5)  /* Apabila saat dituang wadah b melebihi kapasitasnya */
            {
                a = (a+b)-5;    /* Sisa dari wadah a setelah menuang */
                b = 5;  /* Dalam kasus ini, wadah b berarti penuh */
            }
            else{   /* Apabila saat dituang wadah b TIDAK melebihi kapasitasnya */
                b = b + a;  /* Wadah b berarti isi dari wadah b ditambah isi a */
                a = 0;  /* Dalam kasus ini, wadah a berarti sampai kosong */
            }
        }
        else if (command == 4)  /* Tuang isi B ke A */
        {
            if ((a+b) > 3)  /* Apabila saat dituang wadah a melebihi kapasitasnya */
            {
                b = (a+b) - 3;  /* Sisa dari wadah b setelah menuang */
                a = 3;  /* Dalam kasus ini, wadah a berarti penuh */
            }
            else    /* Apabila saat dituang wadah a TIDAK melebihi kapasitasnya */
            {
                int a_temp = a; /* Membuat variabel baru untuk menyimpan isi dari a sebelum dituang */
                a = a + b;  /* Isi dari a menjadi isi a ditambah isi b */
                b = b - (a - a_temp);   /* a - a_temp adalah berapa banyak b mengisi a */
                                        /* Setelah itu, isi b menjadi isi b sebelum menuang dikurang berapa banyak b mengisi a */
            }
        }
        else if (command == 5)  /* Kosongkan A */
        {
            a = 0;
        }
        else if (command == 6)  /* Kosongkan B */
        {
            b = 0;
        }   
    }
    /* Keluar ketika wadah b berisi 4 liter */
    printf("Selamat Anda berhasil menyelesaikan permainan ini!");

    return 0;
}