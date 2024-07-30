//terminates
#define N 3
int main() {
	int A[N][N],B[N][N];
	for(int i = 0 ; i < N ; i ++){
		for(int j = 0 ; j < N ; j ++){
			A[i][j] = __VERIFIER_nondet_int();
			B[i][j] = __VERIFIER_nondet_int();
		}
	}
	int C[N][N] = {0};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	return 0;
}
