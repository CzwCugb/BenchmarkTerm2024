//non-terminating
extern int __VERIFIER_nondet_int(void);

int main() {
	int x,y,z;
	x = __VERIFIER_nondet_int();
	y = __VERIFIER_nondet_int();
	z = __VERIFIER_nondet_int();
	while (x < 10) {
		y += z;
		for (int i = 0; i < y; i++) {
			x += i % 2;
			for (int j = x; j > 0; j--) {
				z += j % 3;
				if (z > 1000) {
					z /= 3;
				}
			}
		}
		if (x > 50) {
			break;
		}
	}
	return 0;
}

