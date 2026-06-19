//#include<stdio.h>
//int power(int a, int b){
//	if(b==0){
//		return 1;
//	}
//	return a*power(a,b-1);
//}
//int main(){
//	printf("%d",power(2,3));
//	return 0;
//	
//	
//}
//#include<stdio.h>
//int fibonacci(int n){
//	if(n==0){
//		return 0;
//	}
//	if(n==1){
//		return 1;
//	}
//	return fibonacci(n-1)+fibonacci(n-2);
//}
//int main(){
//	printf("%d", fibonacci);
//}
#include<stdio.h>
int countDigits(int number){
	if(number<10){
		return 1;
	}
	return 1 + countDigits(number/10);
}
int main(){
	printf("%d",countDigits(678));
	return 0;
}
