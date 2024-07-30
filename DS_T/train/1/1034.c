typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  for(int i=0;i<18;i++) {
    y = 13;
  }
  x = 3;
  while(y == x) {
    if(y >= 15) {
      x = 10;
      x -= 3;
  }
  }
  
  
  
}
