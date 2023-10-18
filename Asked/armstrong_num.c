#include <stdio.h>
#include <math.h>

int main()
{
	int num, i, a, len, t;

	scanf("%d", &num);

	len = 0;
	t = num;

	while( t != 0 ){
		len ++ ;
		t /= 10;
	}

	a = 0;
	t = num;
	while( t != 0 ){
		a = a + pow( t % 10 , len );
		t /= 10;
	}

	if( a == num ){
		printf("%d is an Armstrong number.\n", num);
	}
	else{
		printf("%d is NOT an Armstrong number.\n", num);
	}

	return 0;
}
