typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 20;
  for(int i=0;i<16;i++) {
    x -= 2;
  }
  y = 7;
  for(int i=0;i<16;i++) {
    x -= 2;
  }
  x -= 2;
  
  
  
}
