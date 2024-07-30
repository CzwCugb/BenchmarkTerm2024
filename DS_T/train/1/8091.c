typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<6;i++) {
    y += 3;
    y = 5;
  }
  y = 4;
  for(int i=0;i<11;i++) {
    y += 1;
    if(x >= y) {
      y += 3;
  }
  }
  
  
  
}
