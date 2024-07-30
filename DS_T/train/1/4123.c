typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 15;
  for(int i=0;i<15;i++) {
    y -= 1;
  }
  if(y < x) {
    y = 8;
    for(int i=0;i<9;i++) {
      y += 1;
  }
  }
  
  
  
}
