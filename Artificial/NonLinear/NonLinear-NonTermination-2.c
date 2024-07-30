// Non-terminate
extern int __VERIFIER_nondet_int(void);

int main(){
	int x = __VERIFIER_nondet_int();
	int y = __VERIFIER_nondet_int();
	while (x*x*x < y) {
		x = __VERIFIER_nondet_int();
		y = 3*x + 2;
	}
}

