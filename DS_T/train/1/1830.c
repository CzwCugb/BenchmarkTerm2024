typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 3;
  for(int i=0;i<12;i++) {
    if(x < 19) {
      if(y <= x) {
        y = 6;
    }
      x -= 1;
      y -= 3;
  }
  }
  
  
  
}
