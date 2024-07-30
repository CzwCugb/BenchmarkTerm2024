typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 2;
  y = 3;
  x -= 2;
  y = 12;
  if(y == 19) {
    for(int i=0;i<7;i++) {
      x -= 1;
  }
  }
  
  
  
}
