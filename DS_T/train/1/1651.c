typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<11;i++) {
    x = 5;
  }
  if(12 != y) {
    y = 14;
    y -= 1;
    x += 3;
    x -= 3;
  }
  
  
  
}
