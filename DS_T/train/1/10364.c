typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x == y) {
    if(x == 14) {
      y -= 3;
      while(x > y) {
        y = 6;
        if(x != y) {
          y -= 2;
      }
    }
  }
  }
  
  
  
}
