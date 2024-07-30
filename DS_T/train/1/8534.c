typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 20;
  y = 17;
  for(int i=0;i<5;i++) {
    x += 2;
    if(8 != x) {
      x -= 3;
  }
  }
  
  
  
}
