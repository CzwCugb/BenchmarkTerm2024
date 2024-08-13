//non-terminating

extern int __VERIFIER_nondet_int(void);

int main() {
	int n = __VERIFIER_nondet_int();
	int limit = __VERIFIER_nondet_int();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < limit; j++) {
			if (j % 2 == 0) {
				n += 1;
				limit -= 1;
			}
			for (int k = j; k < limit; k++) {
				if (k % 3 == 0) {
					n -= 2;
					limit += 2;
				}
			}
			if (limit <= 0) {
				limit = 5;
			}
		}
	}
	return 0;
}

