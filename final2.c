#include<stdio.h>
double tinhtongsole(int arr[], int n){
	double tong = 0.0;
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 != 0){
			tong += arr[i];
		}
	}
	return tong;
}
int demsole (int arr[], int n){
	int count = 0;
	for (int i = 0; i < n; i++){
		if(arr[i] % 2 != 0){
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap cac phan tu cua mang:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  double tongcacsole = tinhtongsole(arr, n);
  int count_odds = demsole(arr, n);
  if (count_odds == 0) {
    printf("Khong co so le trong mang.\n");
  } else {
    double average = tongcacsole / count_odds;
    printf("Trung binh cong cua cac so le la: %.3lf\n", average);
  }

  return 0;
}