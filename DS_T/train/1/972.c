typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y == x) {
    x += 3;
    if(x >= y) {
      x += 1;
      if(10 == x) {
        x += 3;
    }
  }
  }
  
  
  
}
