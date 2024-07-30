typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<20;i++) {
    x += 3;
    if(y > x) {
      if(13 != y) {
        y = 9;
        if(18 < y) {
          x -= 1;
      }
    }
  }
  }
  
  
  
}
