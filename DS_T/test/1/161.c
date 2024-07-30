typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(18 <= x) {
    if(x >= y) {
      y -= 3;
      x += 1;
  }
    if(x != y) {
      y += 1;
  }
  }
  
  
  
}
