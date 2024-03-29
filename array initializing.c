#include<stdio.h>
int main(){
	int a[10],i,n;
	printf("Enter the no. of elements \n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("the elements are");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
