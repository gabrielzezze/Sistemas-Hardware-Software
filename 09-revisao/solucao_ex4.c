/* Implementar solucao_ex4 */

long mais_um(long a);

long solucao_ex4(long rdi) {
  long rbx = rdi;
  int eax = 0;
  long rax = (long) eax;
  while(rax < rbx) {
    rax = mais_um(rax);
  }
  return rax;
}