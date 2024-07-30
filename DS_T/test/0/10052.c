typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  while(x >= y) {
    x = 11;
  }
  for(int i=0;i<16;i++) {
    x = 2;
  }
  for(int i=0;i<18;i++) {
    x -= 2;
  }
  
  
  
}
