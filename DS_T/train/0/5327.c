typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  while(y != 6) {
    for(int i=0;i<4;i++) {
      x -= 2;
  }
    if(y >= x) {
      y -= 3;
  }
  }
  
  
  
}