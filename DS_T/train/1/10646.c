typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 1;
  for(int i=0;i<1;i++) {
    x -= 1;
  }
  x = 2;
  y = 5;
  if(x < y) {
    y += 1;
  }
  
  
  
}