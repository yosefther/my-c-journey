#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {

int length = strlen(str) ;

for (int i = 0 ; i < length / 2 ;i++){
	
	char temp = str[i];
	str[i] = str[length - i - 1   ];
	str[length- i -1  ] = str[i];
	
	}
}




int main() {
    char str[] = "Hello, =World!";
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}