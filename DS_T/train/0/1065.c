typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y >= 16) {
    x -= 3;
  }
  for(int i=0;i<19;i++) {
    y += 3;
  }
  x += 3;
  if(9 >= x) {
    x += 2;
  }
  
  
  
}
