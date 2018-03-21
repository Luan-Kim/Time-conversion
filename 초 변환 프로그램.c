#include <stdio.h>

int main() {
	
	int Hour, Min, Sec;
	printf("당신은 초 변환 프로그램을 보고 계십니다.\n\n"); 
	printf("초를 입력해주세요: ");
	scanf("%d", &Sec);
	Min = Sec/60;
	Sec = Sec%60;
	Hour = Min/60;
	Min = Min%60;
	printf("\n%dHour %dMin %dSec\n", Hour, Min, Sec);
	return 0; 
}

//a>3600 ? true:false ??
