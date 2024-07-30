typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<12;i++) {
    for(int i=0;i<8;i++) {
      x = 7;
      if(x < y) {
        x = 17;
        y = 18;
    }
      if(x < x) {
        x -= 1;
    }
  }
  }
  
  
  
}
