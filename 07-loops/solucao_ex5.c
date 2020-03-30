
/* Implemente aqui sua versão em C da função ex5
 * presente no arquivo ex5.o
 * 
 * Chame sua função de ex5_solucao */
 
long ex5_solucao(long a, long b) {
  long ecx = 0;
  long r8 = 0;
  long ret;
  while(ecx < a) {
    long div = ecx%b;
    if(div == 0) r8 += ecx;
    ecx += 1;
  }
  return r8;
}