/*
 * Date: 2012-06-03
 * Author: heizmann@informatik.uni-freiburg.de
 *
 */

//termination : proved by Ultimate


typedef long unsigned int size_t;

void * __attribute__((__cdecl__)) malloc (size_t __size) ;

extern int __VERIFIER_nondet_int(void);

int main() {
	int *p = malloc(sizeof(int));
  *p = __VERIFIER_nondet_int();
	while (*p >= 0) {
		(*p)--;
	}
	return 0;
}
