typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 10;
  y -= 2;
  while(y < 18) {
    x += 3;
    for(int i=0;i<9;i++) {
      x += 3;
      if(18 <= x) {
        x += 2;
    }
  }
  }
  
  
  
}
