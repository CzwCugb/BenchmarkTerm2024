typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  x = 9;
  while(x <= y) {
    x += 1;
    x -= 3;
    y += 2;
    while(17 <= x) {
      y += 1;
  }
  }
  
  
  
}
