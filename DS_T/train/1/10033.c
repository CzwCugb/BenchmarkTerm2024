typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 4;
  for(int i=0;i<2;i++) {
    x += 2;
    y -= 3;
    x = 13;
    y -= 2;
  }
  
  
  
}
