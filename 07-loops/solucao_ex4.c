
/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex4.o
 * 
 * Chame sua função de soma_n_solucao */


long soma_n_solucao(int a) {
  int cont = 0; // edx
  long ret = 0; // eax
  while(cont < a) {
    ret += (long) cont;
    cont ++;
  }
  return ret;
}