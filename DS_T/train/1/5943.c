typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 20;
  for(int i=0;i<10;i++) {
    y = 17;
  }
  if(y > x) {
    y += 3;
  }
  y -= 2;
  y -= 3;
  
  
  
}
