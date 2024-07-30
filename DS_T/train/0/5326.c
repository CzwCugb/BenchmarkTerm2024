typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  for(int i=0;i<1;i++) {
    y = 7;
    if(x != 9) {
      y = 16;
  }
    while(x <= 13) {
      y += 2;
  }
    x += 1;
  }
  
  
  
}
