#include<stdio.h>
int main(){
	int arr[5]={4,6,8,3,5};
	int num;
	printf("Nhap gia tri can tim trong mang: ");
	scanf("%d", &num);
	for(int i=0; i<5; i++){
		if(num == arr[i]){
			printf("Phan tu co trong mang");
		}else{
			printf("Phan tu khong co trong mang");
			break;
		}
	}
	
} 
