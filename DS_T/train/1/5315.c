typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<12;i++) {
    x -= 3;
  }
  x += 2;
  if(x >= 16) {
    x += 3;
  }
  x += 2;
  
  
  
}