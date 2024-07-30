typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<2;i++) {
    if(x > y) {
      x = 18;
  }
    y -= 2;
  }
  x -= 2;
  x -= 1;
  for(int i=0;i<20;i++) {
    y += 1;
  }
  
  
  
}
