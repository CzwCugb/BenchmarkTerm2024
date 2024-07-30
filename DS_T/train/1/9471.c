typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 3;
  for(int i=0;i<8;i++) {
    y -= 1;
  }
  if(x <= y) {
    x = 7;
    x += 2;
  }
  
  
  
}
