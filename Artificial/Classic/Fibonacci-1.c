//terminates
//Ranking function : f(n) = n
extern int __VERIFIER_nondet_int(void);

int fibonacci(int n) {
	if (n <= 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int m = __VERIFIER_nondet_int();
	for(int i = 0 ; i < m ; i ++){
		fibonacci(i);
	}
	return 0;
}
