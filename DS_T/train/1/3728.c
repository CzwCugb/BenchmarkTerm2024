typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(14 != x) {
    x = 19;
    y -= 2;
    x -= 2;
  }
  y = 11;
  x = 8;
  for(int i=0;i<16;i++) {
    x += 2;
  }
  
  
  
}