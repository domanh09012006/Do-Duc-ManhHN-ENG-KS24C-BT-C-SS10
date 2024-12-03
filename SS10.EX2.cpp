#include<stdio.h>
int main(){
	int arr[5]={4,6,8,3,5};
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
	printf("Mang sau khi sap xep la: \n");
	for(int i=0; i<n; i++){
		printf("%2d", arr[i]);
	}
	return 0;
}
	
