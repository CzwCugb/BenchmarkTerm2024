typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x >= y) {
    for(int i=0;i<4;i++) {
      y = 20;
      y += 2;
      x -= 1;
      y -= 3;
  }
    y -= 3;
  }
  
  
  
}
