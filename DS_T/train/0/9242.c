typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<13;i++) {
    if(y >= x) {
      x -= 3;
      y += 2;
  }
    if(12 >= y) {
      x += 2;
      while(y < 19) {
        y -= 3;
    }
  }
  }
  
  
  
}
