typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 3;
  x += 1;
  for(int i=0;i<2;i++) {
    y = 15;
  }
  if(y <= 20) {
    y -= 3;
  }
  
  
  
}
