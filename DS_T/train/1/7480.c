typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<11;i++) {
    y = 9;
  }
  for(int i=0;i<1;i++) {
    if(y >= x) {
      y = 7;
      if(x <= x) {
        x -= 2;
    }
  }
  }
  
  
  
}
