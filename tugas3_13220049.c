/* Raihan Fadhil Y. 13220049 */
#include <stdio.h>

int main (){
    char file_name[] = "";
    unsigned char buffer[100];
    FILE *file;

    printf("Masukkan nama file beserta formatnya : \n");
    scanf("%s",file_name);

    file = fopen(file_name, "rb");

    if (file == NULL){
        printf("File tidak ditemukan!");
    }
    else {
        fread(buffer,sizeof(buffer),1,file);
        if (buffer[0] == 0x25 && buffer[1] == 0x50 && buffer[2] == 0x44 && buffer[3] == 0x46 && buffer[4] == 0x2D)
        {
            printf("File ini berupa pdf");
        }
        else if (buffer[0] == 0xFF && buffer[1] == 0xD8 && buffer[2] == 0xFF && buffer[3] == 0xDB)
        {
            printf("File ini berupa jpg");
        }
        else if (buffer[0] == 0xFF && buffer[1] == 0xD8 && buffer[2] == 0xFF && buffer[3] == 0xE0 && buffer[4] == 0x00 && buffer[5] == 0x10 && buffer[6] == 0x4A && buffer[7] == 0x46 && buffer[8] == 0x49 && buffer[9] == 0x46 && buffer[10] == 0x00 && buffer[11] == 0x01 )
        {
            printf("File ini berupa jpg");
        }
        else if (buffer[0] == 0xFF && buffer[1] == 0xD8 && buffer[2] == 0xFF && buffer[3] == 0xEE)
        {
            printf("File ini berupa jpg");
        }
        else
        {
            printf("File bukan pdf maupun jpg");
        }
        
    }
    fclose(file);

    return 0;
}