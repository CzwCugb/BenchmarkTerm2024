typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 2;
  x -= 2;
  while(y < 18) {
    if(y != x) {
      while(x <= y) {
        x += 1;
    }
  }
  }
  
  
  
}
