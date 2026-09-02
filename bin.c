//Binary Search
#include<stdio.h>
int main(){
	int n,l,h,mid,i,key;
	int a[n],pos=-1;
	
	printf("Enter size of an array\n");
	scanf("%d",&n);
	
	printf("Enter array elements in ascending order\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter search element \n");
	scanf("%d",&key);
	l=0;
	h=n-1;
	
	while(l<=h){
		mid = (l+h)/2;
		
		if(key == a[mid]){
		   pos=mid;	
		   break;
		}else if(key>a[mid]){
			l=mid+1;
		}else{
			h=mid-1;
		}
	}
	if(pos>-1){
		printf("Successful search\n");
		printf("Element %d found at position %d ",key, pos+1);
	}else{
		printf("Unsuccessful search");
	}

}
