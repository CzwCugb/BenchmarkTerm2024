typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 19;
  for(int i=0;i<10;i++) {
    for(int i=0;i<16;i++) {
      if(y != x) {
        while(x < y) {
          x -= 2;
          y -= 1;
      }
    }
  }
  }
  
  
  
}