typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y != 4) {
    y = 8;
    x -= 2;
  }
  y -= 1;
  for(int i=0;i<7;i++) {
    y += 3;
  }
  
  
  
}
