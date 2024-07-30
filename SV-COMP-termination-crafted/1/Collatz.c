/*
 * Date: 2012-02-12
 * Author: leike@informatik.uni-freiburg.de
 *
 * This version of the task exhibits an integer overflow.
 */

//termination: for all positive inputs,the value of y would decreace to 1 gradually.

extern int __VERIFIER_nondet_int(void);

int main()
{
	int y = __VERIFIER_nondet_int();
	while (y > 1) {
		if (y % 2 == 0) {
			y = y / 2;
		} else {
			y = 3*y + 1;
		}
	}
	return 0;
}
