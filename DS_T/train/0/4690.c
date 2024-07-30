typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(1 < y) {
    x = 1;
    y = 4;
  }
  for(int i=0;i<18;i++) {
    x -= 1;
  }
  x += 2;
  while(x == 19) {
    x += 3;
  }
  
  
  
}
