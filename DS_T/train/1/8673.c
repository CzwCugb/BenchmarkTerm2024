typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x <= y) {
    x = 4;
    for(int i=0;i<13;i++) {
      x += 1;
      y -= 1;
  }
    y -= 2;
  }
  
  
  
}
