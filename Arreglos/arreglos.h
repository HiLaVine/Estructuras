void ImpArreglo(int a[], int n){
	int i;
	for (i=0;i<n;i++)
		ImpElem(a[i]);
}

void LeeArreglo(int a[], int n ){
	int i;
	for (i=0;i<n;i++)
		a[i]=LeeElem();
}