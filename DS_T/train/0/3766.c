typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(3 != y) {
    x += 3;
    while(17 != y) {
      if(x != 17) {
        if(y >= x) {
          x += 3;
      }
    }
  }
  }
  
  
  
}
