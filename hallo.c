#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	int i=0;
	//ѭ������,ֱ����Esc���˳�
	while(ch = getch()){
		if(ch == 27){
			break;
		}else{
			printf("Number:%d\n", ++i);
		}
	}
	return 0;
}

#if 0
#include <stdio.h>
int main(){
	union{
		int n;
		char ch;
	}data;

	data.n = 0x00000001;		//Ҳ����ֱ��д�� data.n = 1;
	if(data.ch == 1){
		printf("Little-endian\n");
	}else{
		printf("Big-endian\n");
	}
	return 0;
}
#endif