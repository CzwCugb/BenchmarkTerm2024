typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  for(int i=0;i<12;i++) {
    x += 3;
    y += 1;
    if(x >= y) {
      for(int i=0;i<5;i++) {
        x += 1;
    }
  }
  }
  
  
  
}
