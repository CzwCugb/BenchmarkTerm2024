typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<3;i++) {
    if(x != y) {
      while(y <= x) {
        y += 2;
        x -= 3;
        if(7 < x) {
          y -= 3;
      }
    }
  }
  }
  
  
  
}
