typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y == x) {
    x -= 2;
    y = 1;
  }
  if(3 >= y) {
    y += 1;
    if(y <= x) {
      x += 2;
  }
    x += 2;
  }
  
  
  
}
