typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 3;
  y += 3;
  for(int i=0;i<18;i++) {
    x += 2;
    y += 3;
  }
  for(int i=0;i<13;i++) {
    x += 1;
  }
  
  
  
}