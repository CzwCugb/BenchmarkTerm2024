typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y <= x) {
    for(int i=0;i<11;i++) {
      if(y > x) {
        y = 3;
        if(x < 9) {
          y -= 3;
      }
    }
  }
  }
  
  
  
}