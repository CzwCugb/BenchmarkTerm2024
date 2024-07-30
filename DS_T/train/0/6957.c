typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<17;i++) {
    y -= 2;
  }
  y = 8;
  while(y > 3) {
    if(x != 8) {
      x -= 1;
  }
    x = 4;
  }
  x += 3;
  
  
  
}
