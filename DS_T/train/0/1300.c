typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  while(y != x) {
    y += 1;
    if(y == x) {
      if(x < y) {
        for(int i=0;i<16;i++) {
          y -= 3;
      }
        x -= 1;
    }
  }
  }
  
  
  
}
