#include <stdio.h>

#define SIZEOF(object) (char *)(&object+1) - (char *)(&object)
#define DECLARE_TYPE(type) ((char*)(((type*)770) + 1) - (char*)770) 

int main()
{
	int i;
	printf("int var size: %lu\n", SIZEOF(i));

	double x;
	printf("double var size: %lu\n", SIZEOF(x));

	int arr[14];
	printf("int arr[14] size : %lu\n", SIZEOF(arr));

	printf("double type size: %lu\n", sizeof(double));

	
	printf("double type size: %lu\n", DECLARE_TYPE(double));

	printf("size_t type size: %lu\n", DECLARE_TYPE(size_t));
	
 
    return 0;
}
