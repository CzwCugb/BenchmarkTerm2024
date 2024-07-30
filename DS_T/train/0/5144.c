typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 5;
  for(int i=0;i<6;i++) {
    x = 15;
  }
  while(y <= x) {
    x = 15;
  }
  if(x <= y) {
    while(15 == x) {
      y += 1;
  }
  }
  
  
  
}
