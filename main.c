// Дан массив размера N и два целых числа K и M (1 ≤ K ≤ N, 1 ≤ M ≤ 10). 
// Перед элементом массива с номером K вставить M новых элементов с нулевыми значениями.

#include <stdio.h>
int main(void)
{
    int a[10];
    int n, k, m;
    printf("N: ");
    scanf("%i", &n);
    printf("K: ");
    scanf("%i", &k);
    printf("M: ");
    scanf("%i", &m);
 
    int i;
    for (i=0; i<n; ++i) {
         printf("a[%i] : ", i+1);
         scanf("%i", &a[i]);
    }
    
    n += m;
 
    for (i = n-1; i >= k+m-1; --i) a[i] = a[i-m];
    for (i = k-1; i < k+m-1; ++i) a[i] = 0;
 
    for (i = 0; i < n; ++i) 
    printf("  %i: %i\n", i+1, a[i]);
 
    return 0;
}