typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 13;
  for(int i=0;i<13;i++) {
    x -= 3;
    x -= 2;
  }
  if(x < y) {
    x += 1;
  }
  y += 1;
  y += 3;
  
  
  
}
