#include <stdio.h>
int main() {
	int a; //소득액
	int b; //나이
	float c; // 세율
    int d; //세액
	    
	
	scanf ("%d %d",&a,&b);
	
	
   if(a<=1000){
		if(b<60){
 			c=0.05;
		}else{
			c=0.04;
	}
	}else{
		if(a<=2000){ 
			if(b<60){
					c=0.06;	
			}else{
				c=0.05;
	}
		}else{
			if(b<60){
				c=0.08;
			}else{
				c=0.07;
			}
		}  
	}
	d=a*c;

	printf("실재 내야할 세금의 액수는 %d원이다\n",d);


	return 0;
}
