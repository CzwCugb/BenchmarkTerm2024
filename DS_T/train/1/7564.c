typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  for(int i=0;i<16;i++) {
    while(y == x) {
      y = 4;
      if(5 != 4) {
        y += 1;
    }
  }
  }
  
  
  
}
