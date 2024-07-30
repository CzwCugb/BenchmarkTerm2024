typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y >= 13) {
    x = 18;
    y -= 3;
  }
  for(int i=0;i<3;i++) {
    y -= 1;
  }
  y = 16;
  x -= 3;
  
  
  
}
