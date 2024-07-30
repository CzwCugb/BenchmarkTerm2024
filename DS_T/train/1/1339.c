typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 13;
  for(int i=0;i<6;i++) {
    if(x > y) {
      y += 2;
  }
    y = 2;
    if(17 <= x) {
      if(y >= x) {
        y -= 3;
    }
  }
  }
  
  
  
}
