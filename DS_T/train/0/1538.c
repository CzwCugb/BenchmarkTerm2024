typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 3;
  for(int i=0;i<20;i++) {
    y += 2;
    x = 4;
    while(y < x) {
      y -= 1;
  }
  }
  
  
  
}
