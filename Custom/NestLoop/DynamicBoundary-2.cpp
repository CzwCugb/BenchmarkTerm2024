//non-terminating

extern int __VERIFIER_nondet_int(void);

int main() {
	int x, y, z;
	x = __VERIFIER_nondet_int();
	y = __VERIFIER_nondet_int();
	z = __VERIFIER_nondet_int();
	
	while (x < 20) {
		y += z;
		for (int i = 0; i < y; i++) {
			if (i % 3 == 0) { 
				x += i % 2 + z % 2;
			} else {
				x -= i % 2;
			}
			
			for (int j = x; j > 0; j -= 2) {
				z += (j % 3) + (i % 2); 
				if (z > 500) {
					z /= 2;
				}
			}
		}
		if (x > 40) {
			break;
		}
	}
	return 0;
}

