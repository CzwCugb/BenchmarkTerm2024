typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 4;
  y -= 2;
  y -= 1;
  y = 17;
  while(x <= y) {
    y -= 2;
    x -= 3;
  }
  
  
  
}
