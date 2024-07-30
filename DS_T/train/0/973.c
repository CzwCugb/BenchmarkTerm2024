typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x <= 5) {
    y += 1;
    for(int i=0;i<2;i++) {
      y = 10;
      while(x <= y) {
        y -= 3;
        y += 3;
    }
  }
  }
  
  
  
}
