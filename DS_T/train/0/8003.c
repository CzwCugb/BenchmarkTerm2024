typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 2;
  for(int i=0;i<12;i++) {
    x = 1;
    x -= 1;
  }
  while(x > y) {
    y += 3;
  }
  
  
  
}