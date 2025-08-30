#include <stdio.h>

int main()
{
	int choice;
	int A=0;
	int B=0;
	int a=0;
	int b=0;
	char continueChoice;
	
	printf("诶哟~欢迎来玩这个计算游戏！"); 
	
	while(1){
	printf("\n\n");
	printf("1.加法\n");
	printf("2.减法\n");
	printf("3.乘法\n");
	printf("4.除法（除数等于零的话触发隐藏情节)\n");
	printf("5.退出\n");
	printf("类型输入1-5以外的数字有惊喜"); 
	printf("\n");
	printf("请问你今天想选择的运算类型是：");
	scanf("%d",&choice);
	printf("\n\n");
	
	if (choice==5){
	printf("希望下次再来！拜拜咯~");
	break;}
	   	
	
    else if (choice==1) {
	  printf("噢亲爱的！你选择了加法\n");
	  printf("第一个数a=");
	  scanf("%d",&A);
	  printf("第二个数b=");
	  scanf("%d",&B);
	  
	  int result=A+B;
	  printf("好的，尊贵的大人，算得的结果是：%d\n",result);
	  printf("\n\n\n\n");
	}


    else if (choice==2){
		printf("拜托！你可是选择了减法！\n");
		printf("那好吧，你选的被减数a=");
		scanf("%d",&a);
		printf("你选择的减数b=");
		scanf("%d",&b);
		
		int result=a-b;
		printf("好的，尊贵的大人，算得的结果是：%d\n",result); 
	    printf("\n\n\n\n");
	}
	
	else if (choice==4){
		printf("哈哈，你选择了除法\n");
		printf("那么，你选的被除数a=");
		scanf("%d",&a);
		printf("你选择的除数b=");
		scanf("%d",&b);
		
		if(b==0){
			printf("完蛋了你，小学不学好，不知道除数不能等于零吗！\n\n"); 
		}else{
		int result=a/b;
		printf("好的，尊贵的大人，算得的结果是：%d\n",result);
		printf("\n\n\n\n");}
	
}
	
	
	else if (choice==3){
		printf("什么？！你选择了乘法！！\n");
		printf("行吧~你选的数a=");
		scanf("%d",&a);
		printf("你选择的数b=");
		scanf("%d",&b);
		
		int result=a*b;
		printf("好的，尊贵的大人，算得的结果是：%d\n",result);
		printf("\n\n\n\n");
        
    }

    else{
    	printf("王八蛋，这是无效的选择！再给我输一遍\n");
    	printf("\n\n");
    	continue;
    	
	}
	
	printf("是否要继续玩计算游戏？(Y/N):");
	scanf(" %c", &continueChoice);
	
	
	if(continueChoice=='n'|| continueChoice =='N'){
		printf("那你下次再来吧...\n");
		break;
	}

} 
}


 
