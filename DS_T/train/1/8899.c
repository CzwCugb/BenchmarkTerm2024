typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y != x) {
    x += 2;
    x += 2;
  }
  if(y != y) {
    for(int i=0;i<15;i++) {
      x += 1;
  }
  }
  
  
  
}
