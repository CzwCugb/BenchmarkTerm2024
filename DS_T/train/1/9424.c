typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 2;
  for(int i=0;i<19;i++) {
    x += 2;
    y += 2;
    if(18 < x) {
      x = 9;
      x += 2;
  }
  }
  
  
  
}
