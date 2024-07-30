/*
 * Date: 2014-06-26
 * Author: leike@informatik.uni-freiburg.de
 */

//Non-termination : for random results of x 

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
	int x;
    x = __VERIFIER_nondet_int();
	while (x >= 0) {
		x = x + __VERIFIER_nondet_int();
	}
	return 0;
}
