/*
 * Date: 06/07/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 * Adapted from Mysore_true-termination.c
 */

//Non-termination : x = 63489 c = -62112

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
	int x;
	int c;
    x = __VERIFIER_nondet_int();
    c = __VERIFIER_nondet_int();
  //prevent overflows
    if(!(-65535<=x && x<=65535)) return 0;
    if(!(-65535<=c && c<=65535)) return 0;
	if (c < 0) {
    	while (x + c >= 0) {
	    	x = x - c;
		    c = c - 1;
	    }
	}
	return 0;
}
