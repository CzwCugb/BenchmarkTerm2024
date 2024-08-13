//terminates

#define N 10
extern int __VERIFIER_nondet_int(void);

int main() {
	int array[N][N][N] = {0};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				array[i][j][k] = __VERIFIER_nondet_int=();
			}
		}
	}
	for (int i = 1; i < N - 1; i++) {
		for (int j = 1; j < N - 1; j++) {
			for (int k = 1; k < N - 1; k++) {
				int sum = 0;
				for (int di = -1; di <= 1; di++) {
					for (int dj = -1; dj <= 1; dj++) {
						for (int dk = -1; dk <= 1; dk++) {
							if (di == 0 && dj == 0 && dk == 0) continue;
							sum += array[i + di][j + dj][k + dk];
						}
					}
				}
				array[i][j][k] = sum;
			}
		}
	}
	return 0;
}
