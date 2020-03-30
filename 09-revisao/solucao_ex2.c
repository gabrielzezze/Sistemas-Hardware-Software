/* Implementar função solucao_ex2 */

long vezes2(long a);

long solucao_ex2(long rdi, long rsi) {
  long rbx = rdi;
  if(vezes2(rsi) <= rdi) return vezes2(rsi) + rdi;
  else return vezes2(rsi) + rdi*2;
}
