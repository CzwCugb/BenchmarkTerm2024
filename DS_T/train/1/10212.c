typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 1;
  x = 5;
  y -= 1;
  y = 14;
  x += 1;
  for(int i=0;i<12;i++) {
    if(y >= x) {
      y += 3;
  }
  }
  
  
  
}
