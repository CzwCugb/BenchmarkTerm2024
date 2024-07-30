typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 2;
  x += 2;
  if(1 == y) {
    x += 1;
    if(x == x) {
      x += 2;
  }
  }
  
  
  
}
