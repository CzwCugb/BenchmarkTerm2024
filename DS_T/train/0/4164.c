typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 2;
  for(int i=0;i<11;i++) {
    x += 2;
    if(y == x) {
      y = 9;
  }
    while(4 < y) {
      if(y <= x) {
        y -= 2;
    }
  }
  }
  
  
  
}
