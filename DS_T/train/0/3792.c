typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  x -= 2;
  x += 2;
  while(y != 11) {
    if(18 != x) {
      x -= 2;
  }
  }
  
  
  
}
