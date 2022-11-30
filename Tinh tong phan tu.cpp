#include <stdio.h>
int main () {

FILE *fi = fopen("InSUM.txt", "r");
FILE *fo = fopen("OutSUM.txt", "w");

int a[100] , n , i , sum = 0;
fscanf(fi , "%d" , &n);

for (i = 0 ; i < n ; i++)
	fscanf(fi, "%d" , &a[i]);
for (i = 0 ; i < n ; i++){

	if (a[i] % 2 == 0)
	sum += a[i];
}
fprintf(fo , "Ket qua phep tinh la %d" , sum);
}
