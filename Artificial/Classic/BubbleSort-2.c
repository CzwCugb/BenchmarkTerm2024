extern int __VERIFIER_nondet_int(void);

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int *array,int n){
	for(int i = n-1 ; i > 0 ; i --){
		for(int j = 0 ; j < i ; j ++){
			if(array[j] > array[j+1]){
				swap(&array[j],&array[j+1]);
			}
		}
	}
}

int main(){
	int arr[5000];
	for(int i = 0 ; i < 5000 ; i ++){
		arr[i] = __VERIFIER_nondet_int();
	}
	bubbleSort(arr,5000);
}
