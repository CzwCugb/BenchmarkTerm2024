typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y >= x) {
    x -= 2;
  }
  for(int i=0;i<10;i++) {
    x += 2;
  }
  x += 1;
  x -= 3;
  
  
  
}
