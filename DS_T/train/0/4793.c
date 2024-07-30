typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y != 7) {
    if(x > 16) {
      y = 20;
  }
    if(x < y) {
      if(y != x) {
        x += 1;
    }
  }
  }
  
  
  
}
