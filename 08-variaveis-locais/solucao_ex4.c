#include <stdio.h>

int ex4_solucao(int rdi) {
  int rbx = rdi;
  int rsp8;
  int rspc;
  int ret = 0;
  scanf("%d %d", &rspc, &rsp8);
  int rdx = rsp8;
  ret = rspc;
  ret = ret+ 2*rdx;
  ret += rbx;
  return ret;
}