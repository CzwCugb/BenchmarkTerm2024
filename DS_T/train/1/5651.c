typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 2;
  for(int i=0;i<4;i++) {
    x = 15;
    y = 2;
    x = 15;
  }
  x = 15;
  for(int i=0;i<14;i++) {
    x += 3;
  }
  
  
  
}
