#include <stdio.h>

int main()
{
	int choice;
	int A=0;
	int B=0;
	int a=0;
	int b=0;
	char continueChoice;
	
	printf("��Ӵ~��ӭ�������������Ϸ��"); 
	
	while(1){
	printf("\n\n");
	printf("1.�ӷ�\n");
	printf("2.����\n");
	printf("3.�˷�\n");
	printf("4.����������������Ļ������������)\n");
	printf("5.�˳�\n");
	printf("��������1-5����������о�ϲ"); 
	printf("\n");
	printf("�����������ѡ������������ǣ�");
	scanf("%d",&choice);
	printf("\n\n");
	
	if (choice==5){
	printf("ϣ���´��������ݰݿ�~");
	break;}
	   	
	
    else if (choice==1) {
	  printf("���װ��ģ���ѡ���˼ӷ�\n");
	  printf("��һ����a=");
	  scanf("%d",&A);
	  printf("�ڶ�����b=");
	  scanf("%d",&B);
	  
	  int result=A+B;
	  printf("�õģ����Ĵ��ˣ���õĽ���ǣ�%d\n",result);
	  printf("\n\n\n\n");
	}


    else if (choice==2){
		printf("���У������ѡ���˼�����\n");
		printf("�Ǻðɣ���ѡ�ı�����a=");
		scanf("%d",&a);
		printf("��ѡ��ļ���b=");
		scanf("%d",&b);
		
		int result=a-b;
		printf("�õģ����Ĵ��ˣ���õĽ���ǣ�%d\n",result); 
	    printf("\n\n\n\n");
	}
	
	else if (choice==4){
		printf("��������ѡ���˳���\n");
		printf("��ô����ѡ�ı�����a=");
		scanf("%d",&a);
		printf("��ѡ��ĳ���b=");
		scanf("%d",&b);
		
		if(b==0){
			printf("�군���㣬Сѧ��ѧ�ã���֪���������ܵ�������\n\n"); 
		}else{
		int result=a/b;
		printf("�õģ����Ĵ��ˣ���õĽ���ǣ�%d\n",result);
		printf("\n\n\n\n");}
	
}
	
	
	else if (choice==3){
		printf("ʲô������ѡ���˳˷�����\n");
		printf("�а�~��ѡ����a=");
		scanf("%d",&a);
		printf("��ѡ�����b=");
		scanf("%d",&b);
		
		int result=a*b;
		printf("�õģ����Ĵ��ˣ���õĽ���ǣ�%d\n",result);
		printf("\n\n\n\n");
        
    }

    else{
    	printf("���˵���������Ч��ѡ���ٸ�����һ��\n");
    	printf("\n\n");
    	continue;
    	
	}
	
	printf("�Ƿ�Ҫ�����������Ϸ��(Y/N):");
	scanf(" %c", &continueChoice);
	
	
	if(continueChoice=='n'|| continueChoice =='N'){
		printf("�����´�������...\n");
		break;
	}

} 
}


 
