#define _CRT_SECURE_NO_WARNINGS  // scanf ��� �� ���� ��� ����
#include <stdio.h>  // ǥ�� ����� �Լ� ����� ���� ���
#include <stdlib.h>  // rand(), srand(), atoi() �Լ� ����� ���� ���
#include <time.h>  // ���� ������ ���� time() �Լ� ����� ���� ���

int main() {
	printf("���� �߱� ������ �����մϴ�.\n");  // ���� ���� �ȳ� ���

	srand(time(NULL));  // ���� �ð��� �������� ���� ���� (���� �ʱ�ȭ)

	// �ߺ����� �ʴ� 3���� ���� ����
	int random1 = rand() % 9 + 1;  // 1~9 ������ ���� ���� ����
	int random2 = (random1 + (rand() % 8 + 1)) % 9 + 1;  // random1�� �ߺ����� �ʴ� �ٸ� ���� ���� (1~9)
	int random3 = (random1 * random2) % 9 + 1;  // ���� �� ���ڿ� �ٸ� ���� ���� (1~9)

	char result[4];  // 3�ڸ� ���ڸ� �������� �����ϱ� ���� �迭 (������ '\0' ���� 4ĭ)
	sprintf(result, "%d%d%d", random1, random2, random3);  // �������� ���ڿ��� ��ȯ�Ͽ� result�� ����

    int computer_number = atoi(result);  // ���ڿ��� ������ ��ȯ�Ͽ� computer_number�� ����

	printf("3�ڸ� ���ڸ� �Է����ּ���.\n");  // ����� �Է� �ȳ�
	printf("���� �Է�: ");

	int input_user_number;  // ����� �Է��� ���� ���� ����
	scanf("%d", &input_user_number);  // ����ڷκ��� ���� �Է� �ޱ�
	printf("%d\n", input_user_number);  // �Է��� ���� ���

	return 0;  // ���α׷� ����
}