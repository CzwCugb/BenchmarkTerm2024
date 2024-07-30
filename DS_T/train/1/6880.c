typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 20;
  if(y < x) {
    x -= 2;
    y -= 3;
  }
  y -= 2;
  y = 7;
  x -= 1;
  
  
  
}
