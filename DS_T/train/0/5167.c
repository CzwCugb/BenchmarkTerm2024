typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x != y) {
    if(x > 14) {
      x = 1;
  }
    y = 17;
  }
  if(x <= 18) {
    while(x != y) {
      x -= 2;
  }
  }
  
  
  
}
