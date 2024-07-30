typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 1;
  x += 2;
  for(int i=0;i<6;i++) {
    x -= 3;
    y += 1;
    if(6 < x) {
      y += 3;
  }
  }
  
  
  
}
