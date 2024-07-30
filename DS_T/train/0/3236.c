typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x < 7) {
    x -= 2;
    x += 3;
  }
  while(y >= x) {
    x -= 1;
  }
  x -= 3;
  for(int i=0;i<7;i++) {
    x += 2;
  }
  
  
  
}
