typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 9;
  if(x >= y) {
    x = 12;
  }
  if(x >= y) {
    x = 7;
    while(y < x) {
      y = 14;
  }
    x -= 1;
  }
  
  
  
}
