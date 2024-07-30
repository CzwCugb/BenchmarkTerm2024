typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 18;
  for(int i=0;i<12;i++) {
    x -= 3;
  }
  x += 3;
  x = 14;
  if(x <= 8) {
    y -= 3;
    y -= 2;
  }
  
  
  
}
