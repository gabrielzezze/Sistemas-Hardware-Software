void scanf(char c[], int *p);

int ex5_solucao(){
  int c = 1;
  int rbx = 0;
  int ret = 0;
  while(c > 0) {
    int rsi = c;
    scanf("%d", &c);
    ret = c;
    if(ret > 0){
      rbx += ret;
    }
  }
  return rbx;
}