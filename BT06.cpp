#include<stdio.h>
#include<stdlib.h>

struct infor {
    char name[100];
    int age;
    char phone[100];
    char email[100];
};

int main() {
    FILE *pointer;
    pointer = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT06.txt", "w");

    if (pointer == NULL) {
        printf("Khong the mo duoc file.\n");
        return 1;
    }

    struct infor s1[100];
    int size;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &size);
    fflush(stdin);

    for (int i = 0; i < size; i++) {
        printf("Nhap ho va ten hoc sinh: ");
        gets(s1[i].name);
        printf("Nhap so tuoi: ");
        scanf("%d", &s1[i].age);
        printf("Nhap so dien thoai: ");
        fflush(stdin);
        gets(s1[i].phone);
        printf("Nhap email: ");
        gets(s1[i].email);
        printf("\n");
    }

    // Ghi toàn b? thông tin vào t?p tin
    fwrite(s1, sizeof(struct infor), size, pointer);

    fclose(pointer);
    printf("Ghi file thanh cong.\n");

    return 0;
}

