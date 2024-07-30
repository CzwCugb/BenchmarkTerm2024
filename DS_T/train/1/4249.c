typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<12;i++) {
    y = 3;
  }
  for(int i=0;i<9;i++) {
    if(y > x) {
      y += 1;
      for(int i=0;i<13;i++) {
        y -= 1;
    }
  }
  }
  
  
  
}
