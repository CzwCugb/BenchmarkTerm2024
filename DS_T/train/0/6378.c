typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 3;
  y -= 2;
  y = 13;
  y = 20;
  y -= 3;
  while(y != x) {
    x -= 1;
  }
  
  
  
}
