typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<14;i++) {
    for(int i=0;i<4;i++) {
      x -= 2;
  }
    y += 2;
  }
  while(y >= x) {
    x = 12;
    while(14 <= y) {
      y -= 2;
  }
  }
  
  
  
}
