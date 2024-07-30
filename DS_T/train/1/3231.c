typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<3;i++) {
    x += 3;
  }
  y = 14;
  for(int i=0;i<3;i++) {
    if(1 > x) {
      y -= 3;
  }
    y += 2;
  }
  
  
  
}
