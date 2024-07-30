typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<1;i++) {
    x += 2;
    while(y >= x) {
      if(y != x) {
        x = 2;
    }
      while(9 <= x) {
        y -= 2;
    }
  }
  }
  
  
  
}
