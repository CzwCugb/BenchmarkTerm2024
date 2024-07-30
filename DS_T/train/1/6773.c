typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 11;
  while(x >= y) {
    x = 8;
    y += 2;
  }
  y -= 1;
  for(int i=0;i<2;i++) {
    x += 1;
  }
  y += 2;
  
  
  
}
