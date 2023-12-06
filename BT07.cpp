#include<stdio.h>
#include<stdlib.h>

struct infor {
    int masach;
    char tacgia[100];
    char giatien[100];
    char theloai[100];
};

int main() {
    FILE *pointer;
    char ch;
    int choice, size;

    pointer = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT07.txt", "w");

    if (pointer == NULL) {
        printf("Khong the mo duoc file.\n");
        return 1;
    }

    struct infor s1[100];

    do {
        printf("\n**********MENU**********\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Luu thong tin sach vao file\n");
        printf("3. Hien thi thong tin sach\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong sach: ");
                scanf("%d", &size);

                for (int i = 0; i < size; i++) {
                    printf("Ma sach %d la: ", i);
                    scanf("%d", &s1[i].masach);

                    fflush(stdin);
                    printf("Nhap ten tac gia: ");
                    gets(s1[i].tacgia);

                    printf("Nhap gia tien: ");
                    gets(s1[i].giatien);

                    printf("Nhap the loai sach: ");
                    gets(s1[i].theloai);
                }
                break;
            case 2:
                fwrite(s1, sizeof(struct infor), size, pointer);
                printf("Luu thong tin sach vao file thanh cong.\n");
                break;
            case 3:
                rewind(pointer);  // Di chuy?n con tr? t?p tin v? d?u t?p tin

                while ((ch = fgetc(pointer)) != EOF) {
                    printf("%c", ch);
                }
                break;
            case 4:
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 4);

    fclose(pointer);

    return 0;
}

