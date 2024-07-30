typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 2;
  x -= 3;
  if(x <= y) {
    x -= 2;
    if(y == x) {
      y = 14;
  }
    if(3 > y) {
      x -= 2;
  }
  }
  
  
  
}
