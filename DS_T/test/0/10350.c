typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x > 12) {
    y = 20;
  }
  for(int i=0;i<14;i++) {
    if(x == y) {
      y -= 1;
  }
    x = 18;
    y -= 1;
  }
  
  
  
}
