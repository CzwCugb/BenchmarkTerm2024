typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 8;
  x = 9;
  for(int i=0;i<2;i++) {
    while(y != x) {
      if(7 < y) {
        if(y < 4) {
          y -= 1;
      }
        x -= 2;
    }
  }
  }
  
  
  
}
