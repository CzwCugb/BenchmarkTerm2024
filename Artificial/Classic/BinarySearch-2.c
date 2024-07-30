extern int __VERIFIER_nondet_int(void);

int binarySearch(int a[], int s, int t) {
	int l = 0, r = s - 1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (a[mid] == t) {
			return mid;
		}
		if (a[mid] < t) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	return -1;
}

int main() {
	int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int t = __VERIFIER_nondet_int();
	binarySearch(arr, 10, t);
	return 0;
}
