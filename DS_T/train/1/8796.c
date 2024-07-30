typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x != y) {
    y += 2;
    for(int i=0;i<2;i++) {
      if(x > 15) {
        x += 3;
    }
      if(y < x) {
        y += 1;
    }
      x += 3;
  }
  }
  
  
  
}
