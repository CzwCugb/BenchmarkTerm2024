typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<16;i++) {
    x += 2;
    x = 15;
  }
  y += 3;
  x -= 2;
  for(int i=0;i<16;i++) {
    if(x < y) {
      x += 1;
  }
  }
  
  
  
}