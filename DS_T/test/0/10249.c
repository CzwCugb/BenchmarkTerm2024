typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<3;i++) {
    for(int i=0;i<17;i++) {
      y -= 2;
      while(x != y) {
        if(y == x) {
          y += 3;
      }
        while(y > x) {
          y += 1;
      }
    }
  }
  }
  
  
  
}
