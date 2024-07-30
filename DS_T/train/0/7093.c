typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y != 7) {
    x -= 2;
  }
  y = 20;
  x -= 2;
  while(y != x) {
    y += 2;
  }
  while(y == 14) {
    y += 3;
  }
  
  
  
}
