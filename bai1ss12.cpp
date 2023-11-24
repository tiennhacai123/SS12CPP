#include<stdio.h>
int signal(int a, int b){
	if(a>b){
	    return a-b;
	} else{
		return b-a;
	}
}
int signal1(int b,int c){
	if(b>c){
		return b-c;
	} else{
		return c-b;
	}
}
int signal2(int a,int c){
	if(a>c){
		return a-c;
	} else{
		return c-a;
	}
}
int sum(int a, int b){
	if(a>b){
	    return a+b;
	} else{
		return b+a;
	}
}
int sum1(int b,int c){
	if(b>c){
		return b+c;
	} else{
		return c+b;
	}
}
int sum2(int a,int c){
	if(a>c){
		return a+c;
	} else{
		return c+a;
	}
}
int main(){
    int a,b,c;
	printf("Nhap a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	int d = sum(a,b);
	int e = sum1(b,c);
	int f = sum2(a,c);
	int g = signal(a,b);
	int h = signal1(b,c);
	int i = signal2(a,c);
    printf("Cap so thu 1 la: \n");
    printf("%d + %d = %d\n",a,b,d);
    if(a>b){
        printf("%d - %d = %d\n",a,b,g);
    } else{
    	printf("%d - %d = %d\n",b,a,g);
	}
    printf("Cap so thu 2 la: \n");
    printf("%d + %d = %d\n",b,c,e);
    if(b>c){
        printf("%d - %d = %d\n",b,c,h);
    } else{
    	printf("%d - %d = %d\n",c,b,h);
	}
    printf("Cap so thu 3 la: \n");
    printf("%d + %d = %d\n",a,c,f);
     if(a>c){
        printf("%d - %d = %d\n",a,c,i);
    } else{
    	printf("%d - %d = %d\n",c,a,i);
	}
}
