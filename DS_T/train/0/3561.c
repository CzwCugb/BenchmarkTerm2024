typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  x -= 2;
  y = 19;
  while(x <= 16) {
    for(int i=0;i<10;i++) {
      x += 2;
  }
    if(y >= x) {
      x += 1;
  }
  }
  
  
  
}
