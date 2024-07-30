typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<20;i++) {
    x -= 3;
    if(x == 15) {
      while(y >= x) {
        if(x != y) {
          x += 2;
      }
    }
  }
  }
  
  
  
}
