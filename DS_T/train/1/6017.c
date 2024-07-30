typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<9;i++) {
    y = 14;
  }
  y -= 2;
  y = 18;
  if(y >= x) {
    x += 3;
  }
  
  
  
}
