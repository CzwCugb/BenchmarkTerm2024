typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<9;i++) {
    y = 14;
  }
  x = 12;
  x += 3;
  x -= 3;
  y = 17;
  while(y <= x) {
    x -= 3;
  }
  
  
  
}
