typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<11;i++) {
    y += 1;
    for(int i=0;i<2;i++) {
      while(x == y) {
        y += 3;
    }
      x -= 1;
  }
  }
  
  
  
}
