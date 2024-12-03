#include<stdio.h>
int main(){
	int arr[5]={4,6,8,3,5};
	 int n = sizeof(arr)/sizeof(arr[0]);
	 for(int i=0; i<n-1; i++){
	 	int NN = i;
	 	for(int j = i+1; j<n; j++){
	 		if(arr[j]< arr[NN]){
	 			NN = j;
			 }
		 }
		 int a = arr[NN];
		 arr[NN] = arr[i];
		 arr[i] = a;
	 }
	 printf("Mang sau khi sap xep la: \n");
	 for(int i=0; i<n; i++){
	 	printf("%2d", arr[i]);
	 }
	 return 0;
}
