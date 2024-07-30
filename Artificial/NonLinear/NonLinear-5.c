//termination
//Ranking Fuction : f(x, y) = min(x, y)

extern int __VERIFIER_nondet_int(void);

int main() {
	int x, y;
	x = __VERIFIER_nondet_int();
	y = __VERIFIER_nondet_int();
	while (x > 0 && y > 0) {
		if (x < y) {
			x = x - 1;
			y = __VERIFIER_nondet_int();
		} else {
			y = y - 1;
			x = __VERIFIER_nondet_int();
		}
	}
	return 0;
}

