#include<stdio.h>
int isPalidrome(int nums[],int n){
	int i;
	for(i=0;i<n;i++){
		if(nums[i]!=nums[n-1-i]){
		 return 0;
		}	
	}
	return 1;
}
int main(){
	int nums1[]={1,2,3,4,5,6,7,8,9};
	int x=sizeof(nums1)/sizeof(nums1[0]);
	if(isPalidrome(nums1,x)){
		printf("Mang 1 la mang doi xung\n");
	} else{
		printf("Mang 1 khong phai la mang doi xung\n");
	}
	int nums2[]={1,2,3,4,5,4,3,2,1};
	int y=sizeof(nums2)/sizeof(nums2[0]);
	if(isPalidrome(nums2,y)){
		printf("Mang 2 la mang doi xung\n");
	}else{
		printf("Mang 2 khong phai la mang doi xung\n");
	}
	return 0;
}