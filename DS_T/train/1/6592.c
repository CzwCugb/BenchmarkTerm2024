typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  x -= 3;
  if(3 < y) {
    if(x == y) {
      x = 3;
  }
    x -= 2;
  }
  if(x != y) {
    x -= 1;
  }
  
  
  
}
