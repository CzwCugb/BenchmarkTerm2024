typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y >= 18) {
    y = 16;
  }
  y = 20;
  while(x >= y) {
    x -= 1;
  }
  y += 1;
  
  
  
}
