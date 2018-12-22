#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	double f;
	
	a = 2;
	
	printf("foot   centimeters\n");     
	for(int i = 1; i <= 5; i++)		//for迴圈 每做完一次i+1// 
	{
		f = a * 2.54;		// 英呎轉換成公分	 //
		printf("%4d%14.2f\n",a,f);	
		a += 2;
			 
		
	}
	
	a = 2;
	printf("foot   centimeters\n");
	int i = 1;
	while(i <= 5)	//while迴圈//
	{
		
		f = a * 2.54;
		printf("%4d%14.2f\n",a,f);
		a += 2;
		i++;
	}
	system("PAUSE");
	return 0;
}


