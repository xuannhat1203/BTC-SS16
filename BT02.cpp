#include<stdio.h>
//C:\Users\Nhat Deep TRaiiii\Desktop
int main(){
	FILE *poiter = NULL;
	int kytudautien = 0;
	poiter = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT01.txt","r");
	if(poiter != NULL){
		do 
		{
			kytudautien = fgetc(poiter);
			printf("%c\n",kytudautien);
				
		}while(kytudautien != EOF);
		fclose(poiter);
	}
	return 0;
}
