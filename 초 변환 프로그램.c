#include <stdio.h>

int main() {
	
	int Hour, Min, Sec;
	printf("����� �� ��ȯ ���α׷��� ���� ��ʴϴ�.\n\n"); 
	printf("�ʸ� �Է����ּ���: ");
	scanf("%d", &Sec);
	Min = Sec/60;
	Sec = Sec%60;
	Hour = Min/60;
	Min = Min%60;
	printf("\n%dHour %dMin %dSec\n", Hour, Min, Sec);
	return 0; 
}

//a>3600 ? true:false ??
