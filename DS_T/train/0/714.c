typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 12;
  y -= 2;
  while(y >= 5) {
    x -= 2;
    y += 3;
  }
  for(int i=0;i<5;i++) {
    y += 2;
  }
  
  
  
}
