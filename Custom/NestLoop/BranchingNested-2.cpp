//non-terminating
extern int __VERIFIER_nondet_int(void);

int main() {
	int a, b, c;
	a = __VERIFIER_nondet_int();
	b = __VERIFIER_nondet_int();
	c = __VERIFIER_nondet_int();
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < c; k++) {
				if (i + j + k % 4 == 0) {
					a += 2;
					b -= 2;
					c += 1;
				} else if ((i + j) % 3 == 0) {
					b += 1;
					c -= 1;
				} else if (i + j + k > 5) {
					c = 2;
				}
			}
		}
		if (a > 20) {
			break;
		}
	}
	
	return 0;
}

