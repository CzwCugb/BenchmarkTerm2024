typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 2;
  y -= 1;
  for(int i=0;i<16;i++) {
    x += 1;
    while(y <= 9) {
      y += 1;
  }
  }
  
  
  
}
