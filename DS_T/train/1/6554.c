typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 1;
  y -= 1;
  if(y != 12) {
    x = 3;
  }
  x -= 3;
  for(int i=0;i<12;i++) {
    x -= 2;
  }
  
  
  
}
