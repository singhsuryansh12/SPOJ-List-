#include <stdio.h>

int main(void) {
	// your code goes here
	int num1[20000], num2[20000], addrev[20000], n=0, i=0,j;
	scanf("%d",&n);
	for(j=n;j>0;j--,i++){
		scanf("%d %d",&num1[i],&num2[i]);
	}
	for(i=0;i<n;i++){
		addrev[i]=rev(rev(num1[i]) + rev(num2[i]));
		printf("%d\n",addrev[i]);
	}
	return 0;
}
int rev(int num){
	int revnum=0;
	for(;num!=0;){
		revnum=revnum*10 + num%10;
		num=num/10;
	}
	return revnum;
}