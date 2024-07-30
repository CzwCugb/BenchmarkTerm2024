typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x < y) {
    y = 3;
  }
  for(int i=0;i<20;i++) {
    y -= 3;
    x = 13;
  }
  y += 3;
  
  
  
}
