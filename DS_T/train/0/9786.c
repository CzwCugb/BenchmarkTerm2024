typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x != y) {
    y -= 1;
    while(x >= y) {
      y -= 2;
      while(y <= x) {
        x = 6;
    }
      y += 1;
  }
  }
  
  
  
}
