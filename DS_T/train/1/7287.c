typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<8;i++) {
    y = 13;
  }
  for(int i=0;i<15;i++) {
    x = 10;
    y = 13;
  }
  y -= 1;
  
  
  
}