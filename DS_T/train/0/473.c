typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<10;i++) {
    y = 15;
  }
  if(x < y) {
    x -= 3;
  }
  while(9 < y) {
    x += 1;
  }
  
  
  
}
