#include "main.h"

int main(){
	int choice;
	char fileName[30] = {0};

	while(1){

		showMenu_1();
		printf("输入菜单选项：");
		
		scanf("%d",&choice);
		while(( getchar())!='\n');
		
		switch(choice){
		case 0:	
			return 0;
		case 1: 
			printf("输入要创建的文件名：");
			scanf("%s",fileName);	
			getchar();			//windows系统下也可用fflush()
			//fgets(fileName, 20, stdin);	//会接受空格、制表符Tab和回车等
			createFile_1(fileName);
			break;
		case 2:
			printf("输入要写入的文件名：");
			scanf("%s",fileName);
			getchar();						
			writeFile_1(fileName);
			break;
		case 3:
			printf("输入要查看的文件名：");
			scanf("%s",fileName);
			getchar();					
			readFile_1(fileName);
			break;
		case 4:
			printf("输入要修改的文件名：");
			scanf("%s",fileName);
			getchar();					
			changeRight_1(fileName);
			break;
		case 5:
			printf("输入要查看的文件名：");
			scanf("%s",fileName);
			getchar();	
			readRight_1(fileName);
			break;
		}
	}

	return 0;
}

