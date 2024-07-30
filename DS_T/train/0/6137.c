typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<13;i++) {
    while(y <= x) {
      x -= 2;
      for(int i=0;i<1;i++) {
        x -= 1;
    }
      y += 3;
      y -= 1;
  }
  }
  
  
  
}
