typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y > x) {
    y = 18;
    y += 1;
    y += 1;
  }
  for(int i=0;i<14;i++) {
    x -= 2;
    y -= 2;
  }
  
  
  
}
