typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  for(int i=0;i<15;i++) {
    x -= 1;
    x = 9;
    while(y == x) {
      y += 1;
  }
  }
  
  
  
}