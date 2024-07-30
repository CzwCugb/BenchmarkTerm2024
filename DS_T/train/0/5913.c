typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(20 < y) {
    while(y < 20) {
      if(y != x) {
        x = 4;
        y = 12;
    }
      y += 2;
  }
  }
  
  
  
}
