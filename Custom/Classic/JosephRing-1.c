// terminates;
extern int __VERIFIER_nondet_int(void);

int main() {
	int n, k, next[1000];
	n = __VERIFIER_nondet_int();
	k = __VERIFIER_nondet_int();
	if(n <= 0 || n >= 1000 || k <= 0 || k > n) return 0;
	for (int i = 0 ; i < n; i++) {
		next[i] = (i + 1) % n; 
	}
	int current = 0;
	while (n--) {
		for (int j = 1; j < k; j++) {
			current = next[current];
		}
		next[current] = next[next[current]];
	}
	return 0;
}
