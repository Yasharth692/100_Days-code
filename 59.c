//Q59 (Arrays (1D))
//Count even and odd numbers in an array.

#include <stdio.h>

int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);
    
    int arr[n];
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
    for(int i = 0;i < n; i++){
        if(arr[i] % 2 == 0){
            even = even + 1;
        } else{
            odd = odd + 1;
        
        }
    }
    printf("Even = %d , Odd = %d",even,odd);
    return 0;
}
