typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 4;
  for(int i=0;i<17;i++) {
    x -= 2;
  }
  for(int i=0;i<7;i++) {
    while(x == y) {
      if(y != x) {
        y -= 3;
    }
  }
  }
  
  
  
}
