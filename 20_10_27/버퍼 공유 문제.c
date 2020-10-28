//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	int age;
//	char name[20];
//
//	fp = fopen("a.txt", "r");
//	fscanf(fp, "%d", &age);
//	fgets(name, sizeof(name), fp); 
//
//	printf("나이 : %d, 이름 : %s", age, name);
//	fclose(fp);
//
//	return 0;
//}
//
///* int fflush(FILE *) : 버퍼를 비운다. 출력 파일에 사용하면 버퍼를
//						비우면서 남은 데이터를 연결된 장치로 바로 출력한다.*/