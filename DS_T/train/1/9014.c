typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<12;i++) {
    if(x <= 18) {
      y -= 1;
  }
    if(y > x) {
      y -= 3;
      y += 1;
  }
  }
  
  
  
}
