typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 8;
  if(y != 16) {
    y += 2;
    x = 14;
  }
  x -= 2;
  for(int i=0;i<18;i++) {
    y += 3;
    y -= 2;
  }
  
  
  
}
