typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  for(int i=0;i<2;i++) {
    x -= 2;
  }
  for(int i=0;i<2;i++) {
    x -= 2;
  }
  for(int i=0;i<1;i++) {
    if(13 >= x) {
      y -= 3;
  }
  }
  
  
  
}