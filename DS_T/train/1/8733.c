typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<12;i++) {
    if(y > x) {
      for(int i=0;i<14;i++) {
        if(x == y) {
          x += 1;
      }
        y -= 2;
    }
  }
  }
  
  
  
}
