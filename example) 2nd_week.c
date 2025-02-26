#define _CRT_SECURE_NO_WARNINGS  // scanf 사용 시 보안 경고 무시
#include <stdio.h>  // 표준 입출력 함수 사용을 위한 헤더
#include <stdlib.h>  // rand(), srand(), atoi() 함수 사용을 위한 헤더
#include <time.h>  // 난수 생성을 위한 time() 함수 사용을 위한 헤더

int main() {
	printf("숫자 야구 게임을 시작합니다.\n");  // 게임 시작 안내 출력

	srand(time(NULL));  // 현재 시간을 기준으로 난수 생성 (난수 초기화)

	// 중복되지 않는 3개의 숫자 생성
	int random1 = rand() % 9 + 1;  // 1~9 사이의 랜덤 숫자 생성
	int random2 = (random1 + (rand() % 8 + 1)) % 9 + 1;  // random1과 중복되지 않는 다른 숫자 생성 (1~9)
	int random3 = (random1 * random2) % 9 + 1;  // 앞의 두 숫자와 다른 숫자 생성 (1~9)

	char result[4];  // 3자리 숫자를 무낮열로 저장하기 위한 배열 (마지막 '\0' 포함 4칸)
	sprintf(result, "%d%d%d", random1, random2, random3);  // 정수들을 문자열로 변환하여 result에 저장

    int computer_number = atoi(result);  // 문자열을 정수로 변환하여 computer_number에 저장

	printf("3자리 숫자를 입력해주세요.\n");  // 사용자 입력 안내
	printf("숫자 입력: ");

	int input_user_number;  // 사용자 입력을 받을 변수 선언
	scanf("%d", &input_user_number);  // 사용자로부터 정수 입력 받기
	printf("%d\n", input_user_number);  // 입력한 숫자 출력

	return 0;  // 프로그램 종료
}