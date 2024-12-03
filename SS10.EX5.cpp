#include<stdio.h>
int binary_search(int arr[], int a, int x){

	int l = 0, r = a-1;
	while(l <=r ){
		int m = (l+r)/2;
		if(arr[m] == x){
			return 1;
		}else if(arr[m]<x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return 0;
}
int main(){
	
	int arr[9]={4,6,8,3,5,9,2,13,45};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i < n-1; i++){
		for(int j=0; j < n-1; j++){
			if(arr[j] > arr[j+1]){
				int a = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = a;
			}
		}
	}
	int a = 9, x;
	printf("Nhap phan tu mua tim kiem: ");
	scanf("%d", &x);
	if(binary_search(arr, a, x)){
		printf("Tim thay %d trong mang\n", x);
	}else{
		printf("Khong tim thay %d trong mang\n", x);
	}
	return 0;
}

