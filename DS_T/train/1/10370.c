typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  for(int i=0;i<20;i++) {
    if(y < x) {
      x = 2;
      y -= 1;
  }
    for(int i=0;i<17;i++) {
      y -= 2;
  }
  }
  
  
  
}
