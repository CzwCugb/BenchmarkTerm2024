typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<17;i++) {
    y = 4;
    x -= 2;
  }
  y -= 1;
  for(int i=0;i<12;i++) {
    while(x == y) {
      x -= 2;
  }
  }
  
  
  
}