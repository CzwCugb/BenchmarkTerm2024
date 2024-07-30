typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 11;
  if(y < x) {
    y += 3;
    y -= 1;
    y = 5;
  }
  for(int i=0;i<3;i++) {
    y += 2;
  }
  
  
  
}
