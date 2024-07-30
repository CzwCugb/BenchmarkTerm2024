typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 1;
  if(y >= x) {
    x += 1;
  }
  for(int i=0;i<1;i++) {
    x = 8;
  }
  for(int i=0;i<13;i++) {
    x -= 3;
  }
  
  
  
}
