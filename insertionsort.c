#include <stdio.h>

void insertionsort(int arr[],int n){
	int key,j;
	for(int i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("-%d-",arr[i]);
	}
}

void main(){
	int n;
	printf("Enter the length of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter :");
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,n);
	display(arr,n);
}