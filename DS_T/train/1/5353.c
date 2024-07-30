typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 18;
  while(y < 9) {
    x += 2;
  }
  x += 3;
  y = 2;
  for(int i=0;i<9;i++) {
    x -= 1;
  }
  
  
  
}
