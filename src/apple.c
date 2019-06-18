#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  int sum = 0;
  for (int j = 0; j < n; j++){
    sum += A[j];
  }
  return k*m >= sum;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = -1;
  ub = n;

  while (ub - lb > 1){
    int m = (ub + lb) / 2;
    if (p(m)) ub = m;
    else lb = m;
  }
  printf("%d\n",A[ub-1]);
  return 0;
}
