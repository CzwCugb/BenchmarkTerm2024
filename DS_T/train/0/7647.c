typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x != 20) {
    y = 19;
  }
  while(x >= y) {
    y += 2;
    for(int i=0;i<16;i++) {
      x += 3;
  }
  }
  
  
  
}
