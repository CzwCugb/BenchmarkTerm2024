typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 14;
  for(int i=0;i<11;i++) {
    for(int i=0;i<19;i++) {
      x += 1;
  }
    for(int i=0;i<17;i++) {
      if(x <= y) {
        x += 2;
    }
  }
  }
  
  
  
}
