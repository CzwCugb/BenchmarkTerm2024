typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x >= 6) {
    x += 2;
    x -= 2;
    if(x >= 6) {
      x += 3;
      x -= 1;
  }
  }
  
  
  
}