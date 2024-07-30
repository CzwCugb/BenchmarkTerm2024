typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  y = 13;
  for(int i=0;i<2;i++) {
    while(y == x) {
      x = 9;
      y += 3;
  }
    y = 7;
  }
  y -= 3;
  
  
  
}
