#include<stdio.h>
main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("%d\n", ptr);  // show the memory location 
	printf("%d\n", ptr+1);  //increment memory location by 1(4 byte) ans is old+4;
printf("---------------------New program-----------------------")	;
	int arr[ ] = {1,2,3,4,5,6,7};
	printf("\nvalur of element 0 :                  %d", arr[0]);    // value of element 0
	
	printf("\n\naddress of element 0 :              %d", &arr[0]);   // address of element 0
	printf("\naddress of element 0 by arithmatic :%d", arr);      // address of element 0          both are same this and upper one
	printf("\n\naddress of element  1:              %d", &arr[1]);  //address element 1 by increment in arr
	printf("\naddress of element 1 by aritmatic :   %d", arr+1);    //address of element 1  by incremenet in aritjmatic   both are same this and uppper one
	
	printf("\n\naddress of element 2 :              %d", &arr[2]);  //address element 1 by increment in arr
	printf("\naddress of element 2 by aritmatic :   %d", arr+2);    //address of element 1  by incremenet in aritjmatic
	
	
	// by the same procedure we can get the value in ml
	printf("\n\nthe value at address of first element of the array :%d", *(&arr[0]));
	printf("\nthe value at address of first element of the array :%d", *(arr));
	
	printf("\n\nthe value at address of second element of the array :%d", (arr[1]));
	printf("\nthe value at address of second element of the array :%d", *(arr+1));
	
	printf("\n\nthe value at address of third element of the array :%d", (arr[2]));
	printf("\nthe value at address of third element of the array :%d", *(arr)+2);
	
	/*if we want to increment ponter array we cant do it buy we do it by making a pointer
	"int arr[ ] = {1,2,3,4,5,6,7};
	int *arrptr=arr;
	arrptr++;"
		we can do above steps to increent the pointers.......
		
		
		*/
	
}
