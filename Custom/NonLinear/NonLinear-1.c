// Terminate
// Ranking function: f(x) = y - x^3

extern int __VERIFIER_nondet_int(void);

int main(){
	int x = __VERIFIER_nondet_int();
	int y = __VERIFIER_nondet_int();
	if(x > 0 && y > 0){
		while (x*x*x < y) {
			x = x + 1;
			y = 3*x + 2;
		}
	}
}

