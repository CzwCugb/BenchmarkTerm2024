typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 4;
  for(int i=0;i<6;i++) {
    x -= 3;
  }
  for(int i=0;i<2;i++) {
    y = 8;
  }
  if(x == 14) {
    y += 3;
  }
  
  
  
}
