typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<6;i++) {
    if(y != x) {
      while(y <= 14) {
        if(x != 5) {
          y -= 2;
      }
        x += 3;
    }
      x -= 2;
  }
  }
  
  
  
}
