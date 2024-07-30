typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 1;
  for(int i=0;i<3;i++) {
    x += 2;
  }
  for(int i=0;i<14;i++) {
    y -= 3;
  }
  for(int i=0;i<12;i++) {
    y += 1;
  }
  
  
  
}
