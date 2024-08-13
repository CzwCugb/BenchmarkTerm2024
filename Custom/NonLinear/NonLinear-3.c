// Terminate
// Ranking Function : f(x) = log(x);

extern int __VERIFIER_nondet_int(void);

int main() {
	int x = __VERIFIER_nondet_int();
	int y = __VERIFIER_nondet_int();
	if(x <= 1 || y <= 1) return 0;
	while (x > 1) {
		x = x / y;
	}
	return 0;
}
