#include<stdio.h>
int main(){
	char arr[5]={'a','b','c'};
	int arr1[5]={1,2,3};
	char *p;
	int *i;
	p=arr;
	i=arr1;
	
	i++;
	
	printf("%d\n",*i);
	
	p++;
	
	printf("%c\n",*p);
	
	p=p+sizeof(arr[0]);
	
	printf("%c",*p);
	
	
	return 0;
	
}
