#include <stdio.h>
struct type_thing{
	int x;
};
int main(){
	struct type_thing a;
	 a.x = 30;
	printf("%d",a.x);
	return 0;
}