typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 9;
  x = 7;
  y = 3;
  if(x <= y) {
    y -= 3;
    if(x == y) {
      y -= 3;
  }
  }
  
  
  
}
