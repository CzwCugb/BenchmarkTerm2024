typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 17;
  x = 10;
  x -= 2;
  while(x <= y) {
    x -= 2;
    for(int i=0;i<14;i++) {
      x -= 2;
  }
  }
  
  
  
}
