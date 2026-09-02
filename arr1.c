#include<stdio.h>
int main(){
	//int a[5]={5,4,6,2,9};
	
	int i, n;
	int arr[n];
	printf("Enter array size");
	scanf("%d",&n);
	
	
	printf("Enter array elements]n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Array elements\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("Array elements from last to first\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}
