typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<9;i++) {
    y = 1;
  }
  for(int i=0;i<17;i++) {
    y += 3;
  }
  while(y >= 3) {
    y -= 2;
  }
  
  
  
}
