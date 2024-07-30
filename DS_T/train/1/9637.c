typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x == y) {
    x -= 1;
  }
  if(x < x) {
    x = 7;
  }
  y -= 2;
  x -= 2;
  if(x == y) {
    y -= 1;
  }
  
  
  
}
