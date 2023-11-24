#include <stdio.h>
#include<stdlib.h>
int isPrime(int num){
	if(num<2){
		return 0;
	}else{
		for(int i=2;i<num/2;i++){
			if(num%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
    int n, m;
    printf("Nhap vao so dong va so cot: ");
    scanf("%d %d", &n, &m);
    int number[n][m];
    do {
        printf("\t\tMENU\t\t\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu o duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam o duong cheo chinh va duong cheo phu\n");
        printf("6. In ra cac phan tu la so nguyen to\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban la: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("number[%d][%d] = ", i, j);
                        scanf("%d", &number[i][j]);
                    }
                }
                break;
            case 2:
                for(int i=0;i<n;i++){
                	for(int j=0;j<m;j++){
                		printf("%d\t",number[i][j]);
					}
					printf("\n");
				}
                break;
            case 3:
            	for(int i=0;i<n;i++){
                	for(int j=0;j<m;j++){
                		if(i==0&&j==0||i==0&&j==m-1||j==0&&i==n-1||j==m-1&&i==n-1){
                			printf("%d\t",number[i][j]);
						}
                	}
                	printf("\n");
                }
                break;
            case 4:
            	for(int i=0;i<n;i++){
            		for(int j=0;j<m;j++){
            			if(i==0||j==0||j==m-1||i==n-1){
            				printf("%d\t",number[i][j]);
						}else{
							printf(" \t");
						}
					}
					printf("\n");
				}
				break;
			case 5:
				if(n==m){
					printf("Cac phan tu o duong cheo chinh: ");
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							if(i==j){
								printf("%d\t",number[i][j]);
							}
						}
					}
					printf("\nCac phan tu o duong cheo phu: ");
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							if(i+j==n-1){
								printf("%d\t",number[i][j]);
							}
						}
					}	
				}else{
					printf("khong hop le");
				}
				break;
			case 6:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
							if(isPrime(number[i][j])){
								printf("%d la so nguyen to \n",number[i][j]);
							}
						}
					}
				break;
			case 7:
				exit(0);
        }
    }while (1 == 1);
}