typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x > y) {
    y = 15;
    for(int i=0;i<19;i++) {
      for(int i=0;i<11;i++) {
        if(y <= x) {
          x += 1;
          y += 2;
      }
    }
  }
  }
  
  
  
}
