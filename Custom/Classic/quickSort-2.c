//terminating
extern int __VERIFIER_nondet_int(void);

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main() {
	int a[100];
	int n = 100;
	for(int i = 0 ; i < n ; i ++){
		a[i] = __VERIFIER_nondet_int();
	}
	int l = __VERIFIER_nondet_int();
	int r = __VERIFIER_nondet_int();
	if(l < 0 || r > n-1) return 0;
	quickSort(a, l, r);
	return 0;
}
