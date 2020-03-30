int solucao_ex3(long rdi, long rsi, int *rdx, int *rcx, int *r8) {
  *rdx = rdi < rsi;
  *rcx = rdi == rsi;
  *r8 = rdi > rsi;
  return rdi > rsi;
}