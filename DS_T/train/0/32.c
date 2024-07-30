typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  for(int i=0;i<1;i++) {
    y = 11;
  }
  x = 5;
  for(int i=0;i<16;i++) {
    while(x <= y) {
      y += 3;
  }
  }
  
  
  
}
