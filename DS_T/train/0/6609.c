typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x != y) {
    x = 10;
  }
  if(x >= y) {
    y -= 3;
  }
  y += 3;
  for(int i=0;i<19;i++) {
    y += 1;
  }
  
  
  
}