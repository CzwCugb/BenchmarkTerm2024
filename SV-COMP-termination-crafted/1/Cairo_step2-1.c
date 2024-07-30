/*
 * Date: 06/07/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 * Adapted from Cairo_true-termination.c
 */

//Buchi Automizer proved that the program is terminating

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int x;
    x = __VERIFIER_nondet_int();
	if (x > 0) {
	    while (x != 0 && x!= -1) {
	    	x = x - 2;
    	}
	}
	return 0;
}
