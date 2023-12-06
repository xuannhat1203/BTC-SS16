#include <stdio.h>

int main() {
    FILE *bt1, *bt2, *bt3;
    char ch;
    bt1 = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT01.txt", "r");
    bt2 = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT02.txt", "r");
    if (bt1 == NULL || bt2 == NULL) {
        printf("Khong mo duoc\n");
        return 1;
    }
    bt3 = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT05.txt", "w");
    if (bt3 == NULL) {
        printf("Khong mo duoc\n");
        return 1;
    }
    while ((ch = fgetc(bt1)) != EOF) {
        fputc(ch, bt3);
    }
    while ((ch = fgetc(bt2)) != EOF) {
        fputc(ch, bt3);
    }
    
    fclose(bt1);
    fclose(bt2);
    fclose(bt3);
    bt3 = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT05.txt", "r");
    if (bt3 == NULL) {
        printf("Khong mo duoc\n");
        return 1;
    }
    while((ch = fgetc(bt3)) != EOF){
    	printf("%c",ch);
	}
    return 0;
}

