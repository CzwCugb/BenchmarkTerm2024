typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y > 15) {
    x += 3;
  }
  for(int i=0;i<3;i++) {
    if(y != 5) {
      y = 2;
      x += 2;
  }
  }
  
  
  
}
