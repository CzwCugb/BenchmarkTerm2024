typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y <= 16) {
    y = 10;
  }
  x -= 3;
  for(int i=0;i<11;i++) {
    if(x >= 1) {
      x += 2;
  }
  }
  
  
  
}
