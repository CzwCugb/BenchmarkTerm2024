typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<12;i++) {
    while(x < y) {
      y -= 1;
  }
    y = 11;
  }
  if(y == x) {
    y = 17;
  }
  if(y != 1) {
    y += 2;
  }
  
  
  
}
