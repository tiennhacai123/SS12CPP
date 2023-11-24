#include<stdio.h>
int multi1(int a,int b){
	return a*b;
}
int multi2(int b,int c){
	return b*c;
}
int multi3(int a,int c){
	return a*c;
}
int divid1(int a,int b){
	if(a<b){
		if(b%a==0){
			return b/a;
		}	
	}else{
		if(a%b==0){
			return a/b;	
		}
	}
}
int divid2(int b,int c){
	if(b<c){
		if(c%b==0){
			return c/b;	
		}
	}else{
		if(b%c==0){
			return b/c;	
		}
	}
}
int divid3(int a,int c){
	if(a<c){
		return c/a;
	}else
	return a/c;
}
int main(){
	int a,b,c;
	printf("Nhap 3 so\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Cap so a va b\n");
	printf("%d * %d = %d\n",a,b,multi1(a,b));
	if(a<b){
		if(b%a==0){
			printf("%d / %d = %d\n",b,a,divid1(a,b));
		}else
		printf("%d khong chia het cho %d\n",b,a);
	} else{
		if(a%b==0){
			printf("%d / %d = %d\n",a,b,divid1(a,b));
		} else
		printf("%d khong chia het cho %d\n",a,b);
	}
	printf("Cap so b va c la\n");
	printf("%d * %d = %d\n",b,c,multi2(b,c));
	if(b<c){
		if(c%b==0){
			printf("%d / %d = %d\n",c,b,divid2(b,c));
		}else
		printf("%d khong chia het cho %d\n",c,b);
	} else{
		if(b%c==0){
			printf("%d / %d = %d\n",b,c,divid2(b,c));
		} else
		printf("%d khong chia het cho %d\n",b,c);
	}
	printf("Cap so a va c la\n");
	printf("%d * %d = %d\n",a,c,multi3(a,c));
	if(a<c){
		if(c%a==0){
			printf("%d / %d = %d\n",c,a,divid3(a,c));
		}else
		printf("%d khong chia het cho %d\n",c,a);
	} else{
		if(a%c==0){
			printf("%d / %d = %d\n",a,c,divid3(a,c));
		} else
		printf("%d khong chia het cho %d\n",a,c);
	}
	return 0;
}