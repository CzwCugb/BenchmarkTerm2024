typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<20;i++) {
    if(x == y) {
      x = 4;
      y -= 3;
  }
    for(int i=0;i<19;i++) {
      x += 1;
  }
  }
  
  
  
}