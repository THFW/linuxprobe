#if 0
#include <stdio.h>

int main()
{
	int a[3];
	printf("%d",a[10000]);

	return 0;
}
#elif 0
#include <stdio.h>
int main()
{
	char str[10]="http://c.biancheng.net";
	puts(str);

	return 0;
}
#elif 1

#include <stdio.h>

void display_array(int arr[], int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main()
{
	int  nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};	
	int nums_new1[9];
	int nums_new2[11];
	int i;

	//ɾ��nums��6��Ԫ��
	for(i=0; i<10; i++){
		//i����6ʱֱ���������������κβ���
		if(i < 6){
			nums_new1[i] = nums[i];
		}else if(i > 6){
			nums_new1[i-1] = nums[i];
		}
	}

	return 0;
}


#endif

















#if 0
#if 0
#include <stdio.h>
#include <windows.h >
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0xC);
	puts("��ɫ����");
	SetConsoleTextAttribute(hConsole, 0xF);
	puts("��ɫ����");
	SetConsoleTextAttribute(hConsole, 2);
	puts("����ɫ����");
	return 0;
}
#elif 0
#include <windows.h>

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
){
	int nSelect = MessageBox(NULL, "��ã���ӭ����C������������","Welcome", MB_OKCANCEL | MB_ICONEXCLAMATION);
	return 0;
}

#elif 0
#include <stdio.h>
int main()
{
	int i=8;
	printf("%d %d %d %d\n",++i,++i,--i,--i);
	return 0;
}

#elif 1
#include <stdio.h>
//��׳�
long factorial(int n){
	int i;
	long result=1;
	for(i=1;i<=n;i++){
		result *= i;
	}
	return result;
}

//���ۼӵĺ�
long sum(long n){
	int i;
	long result=0;
	for(i=1; i<=n; i++){
		//Ƕ�׵���
		result += factorial(i);
	}
	return result;
}
int main(){
	printf("1!+2!+....+9!+10!=%ld\n", sum(10));
	return 0;
}
#endif
#endif