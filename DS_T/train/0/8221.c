typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x > y) {
    y = 19;
  }
  while(y < 10) {
    y = 9;
    for(int i=0;i<3;i++) {
      y -= 3;
  }
  }
  
  
  
}
