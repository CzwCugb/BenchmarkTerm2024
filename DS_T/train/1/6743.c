typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 4;
  y -= 2;
  for(int i=0;i<12;i++) {
    for(int i=0;i<17;i++) {
      if(y != x) {
        x += 3;
    }
  }
  }
  
  
  
}
