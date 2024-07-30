typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<20;i++) {
    x += 3;
    y -= 2;
  }
  y -= 2;
  for(int i=0;i<18;i++) {
    x += 2;
  }
  
  
  
}
